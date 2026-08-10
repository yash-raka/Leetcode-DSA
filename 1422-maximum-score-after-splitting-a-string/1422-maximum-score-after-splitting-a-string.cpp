class Solution {
public:
    int maxScore(string s) {
        int sum = 0;
        for (int i=0;i<s.size()-1;i++){
            int l=0;
            for (int k=0;k<=i;k++){
                if (s[k] == '0'){
                    l++;
                }
            }
            int r = 0; 
            for (int j=i+1;j<s.size();j++) {
                if (s[j] == '1'){ 
                    r++; 
                }
            }
            sum = max(sum, l+r);
        }
    return sum; 
    }
};