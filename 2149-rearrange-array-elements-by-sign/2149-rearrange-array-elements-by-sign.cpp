class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);

    int x = 0;
    int y = 1;
    for (int i=0;i<nums.size();i++){
        if (nums[i] > 0){
            ans[x] = nums[i];
            x = x+2;
        } else {
            ans[y] = nums[i];
            y = y+2;
        }
    }
    return ans;
    }
};