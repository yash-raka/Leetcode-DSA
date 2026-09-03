class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int x = INT_MIN;
        int y = INT_MAX; 
        for (int i=0;i<nums.size();i++){
            x = max(x, nums[i]);
            y = min(y, nums[i]);
        }

        while (y <= x){
            bool x = false;
            for (int i=0;i<nums.size();i++){
                if (y == nums[i]){
                    x = true;
                }
            }
            if (!x){
                ans.push_back(y);
            }
            y++;
        }
    return ans; 
    }
};