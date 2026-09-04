class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& cds, int ext) {
        vector<bool> ans;

        int x = 0;
        for (int i=0;i<cds.size();i++){
            x = max(x, cds[i]);
        }

        for (int i=0;i<cds.size();i++){
            if (cds[i] + ext >= x){
                ans.push_back(true);
            } else {
                ans.push_back(false);
            }
        }
    return ans;
    }
};