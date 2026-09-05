class Solution {
public:
    string truncateSentence(string s, int k) {
        string a = "";
        int x = 1;
        for (int i=0;i<s.size();i++){
            if (s[i] == ' ' && x == k){
                break;
            } else if (s[i] == ' '){
                x++;
                a.push_back(s[i]);
            } else {
                a.push_back(s[i]);
            }
        }
    return a;
    }
};