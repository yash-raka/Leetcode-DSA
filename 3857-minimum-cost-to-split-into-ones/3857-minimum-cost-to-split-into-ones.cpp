class Solution {
public:
    int minCost(int n) {
        int cost = 0;
        for (int i=0;i<n;i++){
            cost += i;
        }
        return cost;
    }
};