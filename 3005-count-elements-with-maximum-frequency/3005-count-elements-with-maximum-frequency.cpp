class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int sum = INT_MIN;
        unordered_map<int, int> ans;
        for (int i=0;i<nums.size();i++){
            ans[nums[i]]++;
            if (ans[nums[i]] > sum){
                sum = ans[nums[i]];
            }
        }
        int x = 0;
        for (int i=0;i<nums.size();i++){
            if (ans[nums[i]] == sum){
                ans[nums[i]] = 0;
                x++;
            }
        }
    return sum*x;
    }
};