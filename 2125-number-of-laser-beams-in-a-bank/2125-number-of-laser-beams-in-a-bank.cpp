class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int m = bank.size();
        int n = bank[0].size();
        vector<int> ans;
        for (int i=0;i<m;i++){
            int x = 0;
            for (int j=0;j<n;j++){
                if (bank[i][j] == '1'){
                    x++;
                }
            }
            ans.push_back(x);
        }
        
        int x = 0; 
        int y = 0;
        for (int num : ans) {
           if (num > 0) {
              if (y > 0) {
                x += y * num;
                }
            y = num;
            }
        }
    return x;
    }
};