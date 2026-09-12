class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (int i=0;i<words.size();i++){
            string b = words[i];
            reverse(words[i].begin(), words[i].end());
            if (b == words[i]){
                return b;
           }
        }
    return "";
    }
};