class Solution {
public:
    int countDigitOccurrences(vector<int>& n, int digit) {
        int z = 0;
        for (int i=0;i<n.size();i++){
            while (n[i] != 0){
                int x = 0;
                x = n[i] % 10;
                n[i] = n[i] / 10;
                cout << x << " ";
                if (x == digit){
                    z++;
                }
            }
        }
    return z;
    }
};