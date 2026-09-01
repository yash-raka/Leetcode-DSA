class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> ans;

        for (int i=0;i<s.size();i++){
            ans[s[i]]++;
        }

        int x = 0;
        int y = 0;
        for (int i=0;i<s.size();i++){
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                x = max(x, ans[s[i]]);
            } else {
                y = max(y, ans[s[i]]);
            }
        }
    return x+y;
    }
};