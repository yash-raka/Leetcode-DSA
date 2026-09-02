class Solution {
public:
    int findClosest(int x, int y, int z) {
        while (x != z || y != z){
            if (x == z && y == z){
                return 0;
            } else if (x == z){
                return 1;
            } else if (y == z){
                return 2;
            }
            if (z > x){ 
                if (z > y){
                    x++;
                    y++;
                } else {
                    x++;
                    y--;
                }
            } else {
                if (z > y){
                    y++;
                    x--;
                } else {
                    x--;
                    y--;
                }
            }
        }
    return 0;
    }
};