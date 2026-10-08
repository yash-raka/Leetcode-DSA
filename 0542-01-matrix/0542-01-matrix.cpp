class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        queue<pair<int, int>> q;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        vector<vector<int>> dist(n, vector<int>(m ,0));
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (mat[i][j] == 0){
                    q.push({i, j});
                    vis[i][j] = 1;
                }
            }
        }
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, 1, -1};

        while (!q.empty()){
            int n1 = q.front().first;
            int n2 = q.front().second;
            q.pop();

            for (int i=0;i<4;i++){
                int a = n1 + dr[i];
                int b = n2 + dc[i];

                if (a >= 0 && a < n && b >= 0 && b < m && vis[a][b] != 1){
                    vis[a][b] = 1;
                    dist[a][b] = dist[n1][n2] + 1;
                    q.push({a, b});
                }
            }
        }
        return dist;
    }
};