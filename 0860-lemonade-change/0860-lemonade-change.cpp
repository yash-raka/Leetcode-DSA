class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int F = 0;
        int T = 0;
        int W = 0;
        for (int i=0;i<bills.size();i++){
            if (bills[i] == 5){
                F++;
            } else if (bills[i] == 10){
                T++;
                if (F <= 0){
                    return false;
                } else {
                    F = F-1;
                }
            } else if (bills[i] == 20){
                W++;
                if (F <= 0){
                    return false;
                } else if (T > 0 && F > 0){
                    T = T-1;
                    F = F-1;
                } else if (T <= 0 && F < 3){
                    return false;
                } else if (T <= 0 && F >= 3){
                    F = F-3;
                }
            }
        }
    return true;
    }
};