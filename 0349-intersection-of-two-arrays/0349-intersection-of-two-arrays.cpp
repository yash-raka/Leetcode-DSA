#include <vector>
#include <unordered_set>

class Solution {
public:
    vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2){
        
        unordered_set<int> set(nums1.begin(), nums1.end());
        vector<int> ans;

        for (int n : nums2) {
            if (set.count(n)) {
                ans.push_back(n);
                set.erase(n); 
            }
        }
    return ans;
    }
};