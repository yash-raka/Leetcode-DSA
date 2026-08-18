class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m = 0;
        int x = 0;
        int i = 0;
        while (i < nums.size()){
            if (nums[i] == 0){
                i++;
                x = 0;   
            } else {
                x++;
                m = max(x, m);
                i++;
            }
        }
    return m;
    }
};