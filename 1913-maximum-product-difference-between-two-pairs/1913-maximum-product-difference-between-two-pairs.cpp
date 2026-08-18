class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int x = INT_MIN;
        int y = INT_MIN;
        for (int i=0;i<nums.size();i++){
            if (nums[i] >= x){
                y = x; 
                x = nums[i];
            } else if (nums [i] <  x && nums[i] >= y){
                    y = nums[i];
            }
        }

        int a = INT_MAX;
        int b = INT_MAX;
        for (int i=0;i<nums.size();i++){
            if (nums[i] <= a){
                b = a;
                a = nums[i];
            } else if (nums[i] > a && nums[i] <= b){
                b = nums[i];
            }
        }

        int z = (x*y) - (a*b);
        
    return z;
    }
};