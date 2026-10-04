class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& img, int sr, int sc, int co) {
        int n = img.size();
        int m = img[0].size();
        int x = img[sr][sc];

        if (x == co){
            return img;
        }

        queue<pair<int, int>> q1;
        q1.push({sr, sc});

        img[sr][sc] = co;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while (!q1.empty()){

        int n1 = q1.front().first;
        int n2 = q1.front().second;
        q1.pop();

        for (int i=0;i<4;i++){
            int a = n1+dr[i];
            int b = n2+dc[i];

            if ( a >= 0 && a < n && b >= 0 && b < m && img[a][b] == x){
                img[a][b] = co;
                q1.push({a, b});
            }  
        }
    }   
    return img;   
    }
};