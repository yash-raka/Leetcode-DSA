class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> ans;
        for (int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        int sum = 0;
        for (int i=0;i<nums.size();i++){
            if (ans[nums[i]] == 1){
                sum += nums[i];
            }
        }
    return sum;
    }
};