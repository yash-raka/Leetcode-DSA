class Solution {
public:
    int findGCD(vector<int>& nums) {
        int s = INT_MAX;
        int l = INT_MIN;
        for (int i=0;i<nums.size();i++){
            s = min(s, nums[i]);
            l = max(l, nums[i]);
        }

        for (int i=1000;i>=1;i--){
            if (s%i == 0 && l%i == 0){
                return i;
            } 
        }
    return 0;
    }
};