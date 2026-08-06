class Solution {
public:
    int maxDifference(string s) {
        int freq[26] = {};
        for (int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }

        int x = 0;
        int y = 10000;

        for (int i=0;i<26;i++){
            int c = freq[i];
            if (c > 0){
                if (c%2 != 0){
                    x = max(c,x);
                } else {
                    y = min(c,y);
                }
            }
        }
        return x-y;
    }
};