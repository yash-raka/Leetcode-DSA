class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int z = 0;
        for (int i=0;i<words.size();i++){
            string a = ""; 
            for (int j=0;j<pref.size() && j<words[i].size();j++){
                a.push_back(words[i][j]);
            }
            if (pref == a){
                z++;
            }
        }
    return z;    
    }
};