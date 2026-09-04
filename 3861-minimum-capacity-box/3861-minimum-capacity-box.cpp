#include <vector>
#include <climits>

class Solution {
public:
    int minimumIndex(vector<int>& cap, int its) {
        int val = INT_MAX;
        int idx = -1;

        for (int i=0;i<cap.size();i++) {
            if (cap[i] >= its && cap[i] < val) {
                val = cap[i];
                idx = i;
            }
        }

    return idx;
    }
};