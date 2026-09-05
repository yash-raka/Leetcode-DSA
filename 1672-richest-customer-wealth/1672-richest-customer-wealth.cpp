class Solution {
public:
    int maximumWealth(vector<vector<int>>& ats) {
        int m = ats.size();
        int n = ats[0].size();
        int sum = 0;
        for (int i=0;i<m;i++){
            int x = 0; 
            for (int j=0;j<n;j++){
                x += ats[i][j];
            }
            sum = max(x, sum);
        }        
    return sum;
    }
};