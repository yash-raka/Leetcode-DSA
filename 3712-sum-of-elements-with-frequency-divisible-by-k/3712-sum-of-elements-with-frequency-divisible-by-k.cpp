class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int, int> ans;
        for (int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        int sum = 0;
        for (int i=0;i<nums.size();i++){
            if (ans[nums[i]]%k == 0){
                sum += nums[i];
            }
        }
    return sum;
    }    
};