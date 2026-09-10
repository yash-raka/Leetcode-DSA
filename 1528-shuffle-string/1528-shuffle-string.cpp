class Solution {
public:
    string restoreString(string s, vector<int>& ind) {
        string b = s;
        for (int i=0;i<ind.size();i++){
            b[ind[i]] = s[i];
        }
    return b;
    }
};