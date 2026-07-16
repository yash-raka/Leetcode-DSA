class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for (int i=0;i<nums.size()-1;i++){
            if (nums[i] == nums[i+1]){
                nums[i] = nums[i]*2;
                nums[i+1] = 0;
            }
        }
        int x = 0;
        int y = 0;
        for (int i=0;i<nums.size();i++){
            if (nums[i] != 0){
                nums[y] = nums[i];
                y++;
            } else {
                x++;
            }
        }
        while(x != 0){
            nums[y] = 0;
            y++;
            x--;
        }
    return nums;
    }
};