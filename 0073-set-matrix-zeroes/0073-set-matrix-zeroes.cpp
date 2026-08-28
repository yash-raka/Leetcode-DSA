#include <vector>

using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size(); 

        vector<int> rowArray(m, 0); 
        vector<int> colArray(n, 0); 

        for (int i=0;i<m;i++) {
            for (int j=0;j<n;j++) {
            if (matrix[i][j] == 0) {
                rowArray[i] = 1; 
                colArray[j] = 1; 
            }
            }
        }

        for (int i=0;i<m;i++) {
            for (int j=0;j<n;j++) {
            if (rowArray[i] == 1 || colArray[j] == 1) {
                matrix[i][j] = 0;
            }
            }
        }
    }
};