class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> ans;
        for (int i=0;i<chars.size();i++){
            ans[chars[i]]++;
        }
        int x = 0;
        for (int i=0;i<words.size();i++){
            unordered_map<char, int> temp;
            for (char ch : words[i]){
                temp[ch]++;
            }
            bool ok = true;
            for (int j=0;j<words[i].size();j++){
                char ch = words[i][j];
                if (temp[ch] > ans[ch]){
                    ok = false;
                    break;
                }
            }
            if (ok){
                x += words[i].size();
            }
        }
    return x;
    }
};