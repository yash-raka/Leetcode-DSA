class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> x;
        for (int n:arr) {
            x[n]++;
        }
        int z = -1;
        for (auto& [n, freq]:x) {
            if (n == freq) {
                z = max(z, n);
            }
        }
    return z;
    }
};