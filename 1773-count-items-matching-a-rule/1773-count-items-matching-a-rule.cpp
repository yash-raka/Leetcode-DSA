class Solution {
public:
    int countMatches(vector<vector<string>>& items, string rK, string rV) {
        int z = 0; 
        for (int i=0;i<items.size();i++){
            if (rK == "type" && items[i][0] == rV){
                z++;
            } else if (rK == "color" && items[i][1] == rV){
                z++;
            } else if (rK == "name" && items[i][2] == rV){
                z++;
            }
        }
    return z;
    }
};