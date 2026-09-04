class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> ans = nums;
        int x = 0;
        for (int i=0;i<nums.size();i++){
            while (nums[i] != 0){
                x = x*10 + nums[i]%10;
                nums[i] = nums[i] / 10;
            }
            ans.push_back(x);
            x = 0;
        }

        for (int i=0;i<ans.size();i++){
            cout << ans[i] << " ";
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