class Solution {
public:
    int maxSatisfaction(vector<int>& sat) {
        sort(sat.begin(), sat.end());
        reverse(sat.begin(), sat.end());
        int sum = 0;
        int x = 0;
        for (int i=0;i<sat.size();i++){
            x += sat[i];
            if (x > 0){
              sum += x;
            } else {
              break;
            }
        }
        if (sum > 0){
            return sum;
        }
    return 0;
    }
};
