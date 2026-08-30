class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> anss;
        unordered_map<int, int> ans;
        for (int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }

        while (k>0){
            int x = 0;
            for (int i=0;i<nums.size();i++){
                x = max(x, ans[nums[i]]); 
            }
            for (int i=0;i<nums.size();i++){
                if (x == ans[nums[i]]){
                    anss.push_back(nums[i]);
                    ans[nums[i]] = 0;
                    break;
                }
            }
            k--;
        }
    return anss;
    }
};