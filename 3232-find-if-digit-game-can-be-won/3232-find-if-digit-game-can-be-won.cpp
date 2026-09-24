class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int x = 0;
        int y = 0;
        for (int num : nums) {
            if (num < 10){
                x += num;
            } else {
                y += num;
            }
        }
        if (x == y){
            return false;
        }
    return true;
    }
};