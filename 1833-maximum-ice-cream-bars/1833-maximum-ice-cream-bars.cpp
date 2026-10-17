class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int x = 0;
        for(int i=0;i<costs.size();i++){
            if (coins >= costs[i]){
                coins = coins-costs[i];
                x++;
            } else {
                break;
            }
        }
    return x;    
    }
};