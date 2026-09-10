class Solution {
public:
    int differenceOfSum(vector<int>& n) {
        int sum = 0;
        for (int i=0;i<n.size();i++){
            sum += n[i];
        }
        
        int x = 0;
        for (int i=0;i<n.size();i++){
            while (n[i] != 0){
                x += n[i] % 10;
                n[i] /= 10;
            }
        }
    return abs(sum-x);
    }
};