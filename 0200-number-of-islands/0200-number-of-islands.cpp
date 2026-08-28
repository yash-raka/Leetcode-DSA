#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
    private:
    void bfs(int i, int j, vector<vector<int>> &arr, vector<vector<char>>& grid){
        arr[i][j] = 1;
        queue<pair<int, int>> q;
        q.push({i, j});
        int n = grid.size();
        int m = grid[0].size();

        while (!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
        
            for (int i=-1; i<=1; i++){
                if (i==0){
                for (int j=-1; j<=1; j++){
                    int r = row + i;
                    int c = col + j;
                    if ( r >= 0 && r < n && c >= 0 && c < m && grid[r][c] == '1' && !arr[r][c] ){
                        arr[r][c] = 1;
                        q.push({r,c});
                    } 
                }
                }else if (i==-1){
                    int r = row + i;
                    int c = col;
                    if ( r >= 0 && r < n && c >= 0 && c < m && grid[r][c] == '1' && !arr[r][c] ){
                        arr[r][c] = 1;
                        q.push({r,c});
                    }
                }else{
                    int r = row + i;
                    int c = col;
                    if ( r >= 0 && r < n && c >= 0 && c < m && grid[r][c] == '1' && !arr[r][c] ){
                        arr[r][c] = 1;
                        q.push({r,c});
                    }
                } 
            }
        }
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> arr(n, vector<int> (m, 0));
        int count = 0;

        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (!arr[i][j] && grid[i][j] == '1'){
                    bfs(i, j, arr, grid);
                    count++;
                }
            }
        }
        return count;
    }
};