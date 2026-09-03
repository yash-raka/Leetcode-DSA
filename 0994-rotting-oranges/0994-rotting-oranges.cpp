class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        
        queue<pair<int, int>> q;
        int fresh = 0;

        for (int i=0;i<r;i++){
            for (int j=0;j<c;j++){
                if (grid[i][j] == 2){
                    q.push({i, j});
                } else if (grid[i][j] == 1){
                    fresh++;
                }
            }
        }

        if (fresh == 0){
            return 0;
        }

        int ans=0;
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();

                if ( x-1 >= 0){
                    if (grid[x-1][y] == 1){
                        grid[x-1][y] = 2;
                        fresh--;
                        q.push({x-1,y});
                    }
                }

                if (x+1 < r){
                    if (grid[x+1][y] == 1){
                        grid[x+1][y] = 2;
                        fresh--;
                        q.push({x+1,y});
                    }
                }
                if (y-1 >= 0){
                    if (grid[x][y-1] == 1){
                        grid[x][y-1] = 2;
                        fresh--;
                        q.push({x, y-1});
                    }
                }
                if (y+1 < c){
                    if (grid[x][y+1] == 1){
                        grid[x][y+1] = 2;
                        fresh--;
                        q.push({x,y+1});
                    }
                } 
            }
            ans++;
        }

        if (fresh == 0){
            return ans-1;
        } else {
            return -1;
        }        
    }
};