class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int z = 0;
        for (int i=0;i<piles.size();i++){
            z = max(piles[i], z);
        }

        int s = 1;
        int e = z;
        while( s <= e){
            long long m = s+(e-s)/2;
            long long x = 0;

            for(long i=0;i<piles.size();i++){
                x += (piles[i] + (m-1))/m;
                
            }

            if (x <= h){
                e = m-1;
            } else {
                s = m+1;
            }

        }
    return s;    
    }
};