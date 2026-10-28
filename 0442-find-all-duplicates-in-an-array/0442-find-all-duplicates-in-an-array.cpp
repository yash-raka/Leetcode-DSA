class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> ans;
        vector<int> arr;
        for (int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        for (int i=0;i<nums.size();i++){
            if (ans[nums[i]] == 2){
                ans[nums[i]] = 0;
                arr.push_back(nums[i]);;
            }
        }
    return arr;
    }
};