class Solution {
public:
    int mostWordsFound(vector<string>& sen) {
        int m = 0;
        for (int i=0;i<sen.size();i++){
            int x = 0;
            for (int j=0;j<sen[i].size();j++){
                if (sen[i][j] == ' '){
                    x++;
                }
            }
        m = max(m , x);
        }
    return m+1;
    }
};