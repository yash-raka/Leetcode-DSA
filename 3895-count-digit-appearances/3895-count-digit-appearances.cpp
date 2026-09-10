class Solution {
public:
    int countDigitOccurrences(vector<int>& n, int d) {
        int z = 0;
        for (int i=0;i<n.size();i++){
            while (n[i] != 0){
                if (d == n[i] % 10){
                    z++;
                }
                n[i] = n[i] / 10;
            }
        }
    return z;
    }
};