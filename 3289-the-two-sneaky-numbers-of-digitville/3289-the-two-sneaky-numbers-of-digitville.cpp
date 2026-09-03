class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> arr;
        unordered_map<int, int> ans;
        for (int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        for (int i=0;i<nums.size();i++){
            if (ans[nums[i]] == 2){
                arr.push_back(nums[i]);
                ans[nums[i]] = 0;
            }
        }
    return arr;
    }
};