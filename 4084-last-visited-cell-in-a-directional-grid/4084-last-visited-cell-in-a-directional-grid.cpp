#include <vector>

class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false)); 
        int i=0;
        int j=0;
        int x=0;
        int y=0;
        while (true) {
            if (i<0 || i >= n || j < 0 || j >= m || vis[i][j] == 1) {
             break;
            }
            vis[i][j] = 1;
            x = i;
            y = j;
              if (grid[i][j] == 'R') {
             j++;
            } else if (grid[i][j] == 'L') {
              j--;
            } else if (grid[i][j] == 'U') {
              i--;
            } else if (grid[i][j] == 'D') {
              i++;
            }
        }
    return {x,y};
    }
};