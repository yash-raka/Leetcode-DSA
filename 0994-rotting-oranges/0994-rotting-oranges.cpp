class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int>> q;
        
        int fresh = 0;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (grid[i][j] == 2){
                    q.push({i,j});
                } else if (grid[i][j] == 1){
                    fresh++;
                }
            }
        }

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};
        int time = 0;
        
        while (!q.empty()){
            int x = q.size();
            for (int i=0;i<x;i++){
                int n1 = q.front().first;
                int n2 = q.front().second;
                q.pop();

                for (int i=0;i<4;i++){
                    int a = n1 + dr[i];
                    int b = n2 + dc[i];

                    if (a >= 0 && a < n && b >= 0 && b < m && grid[a][b] == 1){
                        grid[a][b] = 2;
                        fresh--;
                        q.push({a, b});
                    }
                }
            }
            if (!q.empty()){
                time++;
            }
        }
        if (fresh == 0){
            return time;
        }
    return -1;
    }
};