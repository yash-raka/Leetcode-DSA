class Solution {
public:
    int minOperations(vector<int>& nums) {
        int sum = 0;
        for (int i=1;i<nums.size();i++){
            if (nums[i] <= nums[i-1]){
                int x = nums[i-1] - nums[i] + 1;
                sum += x;
                nums[i] = nums[i-1] + 1;
            }
        }
    return sum;
    }
};