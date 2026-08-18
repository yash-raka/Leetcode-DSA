class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        string b = paths[0][1];
        string a = paths[0][1];

            for (int i=0;i<paths.size();i++){
                    if (a == paths[i][0]){
                        b = paths[i][1];
                        a = paths[i][1];
                        i = 0;
                    } 
            }
        return b;
    }
};