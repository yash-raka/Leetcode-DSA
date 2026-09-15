class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int sum1 = 0;
        int sum2 = 0;
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                if (i == j){
                    sum1 += mat[i][j];
                }
                if (i+j == m-1){
                    sum2 += mat[i][j];
                }
            }
        }
        int x = m/2;
        if (m%2 != 0){
            return sum1 + sum2 - mat[x][x];
        }
    return sum1 + sum2;
    }
};