class Solution {
public:
    int absDifference(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());
        int lar = 0;
        int sma = 0;

        for (int i=0;i<k;i++){
            sma += nums[i];
        }
        int x = 0;
        for (int i=nums.size()-1;i>=0;i--){
            lar += nums[i];
            x++;
            if (x == k){
                break;
            }
        }
    return abs(lar-sma);
    }
};