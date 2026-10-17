#include <vector>
#include <map>

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& it1, vector<vector<int>>& it2) {
        map<int, int> ans;
        for (const auto& item : it1) {
            ans[item[0]] += item[1];
        }
        for (const auto& item : it2) {
            ans[item[0]] += item[1];
        }
        vector<vector<int>> items;
        for (auto& pair : ans) {
            items.push_back({pair.first, pair.second});
        }
    return items;
    }
};