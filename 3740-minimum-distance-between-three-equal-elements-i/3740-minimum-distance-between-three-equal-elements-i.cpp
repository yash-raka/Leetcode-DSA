class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, int> ans;
        for (int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }

        vector<int> arr;
        for (int i=0;i<nums.size();i++){
            if (ans[nums[i]] >= 3){
                arr.push_back(i);
            }
        }
        int x = INT_MAX; 

        for (int i=0;i<arr.size();i++) {
            vector<int> arr2;
            for (int j=i;j<arr.size();j++) { 
                if (nums[arr[i]] == nums[arr[j]]){ 
                    arr2.push_back(arr[j]);       
                }
            }
            for (int k=0;k+2<arr2.size();k++) {
            int z = abs(arr2[k]-arr2[k+1]) + abs(arr2[k+1]-arr2[k+2]) + abs(arr2[k+2]-arr2[k]);
                x = min(x, z); 
            }
        }
    return x == INT_MAX ? -1 : x; 
    }
};