class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int x = 0;
        for (int i=0;i<nums.size();i++){
            x = max(x, nums[i]);
        }
        int sum = 0;
        for (int i=0;i<k;i++){
            sum += x + i;
        }
    return sum;
    }
};