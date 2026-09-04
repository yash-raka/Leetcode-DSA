class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> ans = nums;
        for (int i=0;i<nums.size();i++){
            int x = 0;
            while (nums[i] != 0){
                x = x*10 + nums[i]%10;
                nums[i] = nums[i]/10;
            }
            ans.push_back(x);
        }
        unordered_map<int,  int> arr;
        for (int i=0;i<ans.size();i++){
            arr[ans[i]]++;
        }

        int z = 0;
        for (int i=0;i<ans.size();i++){
            if (arr[ans[i]] >= 1){
                z++;
                arr[ans[i]] = 0;
            }
        }
    return z;
    }
};