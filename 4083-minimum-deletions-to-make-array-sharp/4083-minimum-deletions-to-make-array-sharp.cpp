class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int x = 0;
        for (int i=0;i<nums.size()-1;i++){
            if (nums[i] == nums[i+1]){
                x++;
            }
        }
    return x;
    }
};