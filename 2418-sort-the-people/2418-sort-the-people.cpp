class Solution {
public:
    vector<string> sortPeople(vector<string>& nam, vector<int>& hei) {
        vector<string> ans;
        int z = 0;
        while (z != hei.size()){
            int x = -1; 
            int y= 0;
            for (int i=0;i<hei.size();i++){
                if (hei[i] > x){ 
                    x = hei[i];
                    y = i;
                }
            }
            ans.push_back(nam[y]);
            hei[y] = -1;
            z++;
        }

        return ans;
    }
};