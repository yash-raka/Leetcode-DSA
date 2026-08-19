class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int, int> freq;
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                freq[grid[i][j]]++;
            }
        }
        int r = 0;
        int m = 0;
        for (int num=1;num<=n*n;num++) {
            if (freq[num] == 2) {
                r = num;
            } else if (freq[num] == 0) {
                m = num;
            }
        }
    return {r, m};
    }
};