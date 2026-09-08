class Solution {
public:
    vector<int> stableMountains(vector<int>& hi, int th) {
        vector<int> ans;
        for (int i=1;i<hi.size();i++){
            if (hi[i-1] > th){
                ans.push_back(i);
            }
        }
    return ans;
    }
};