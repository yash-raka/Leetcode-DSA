class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int x = 0;
        for (int i=0;i<nums.size();i++){
            x += nums[i];
        }
        int y = 0;
        for (int i=nums.size()-1;i>0;i--){
            y = nums[i];
            nums[i] = x;
            x -= y;
        }
    return nums;
    }
};