class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int x = 0;
        while(x < nums.size()){
            int z = 0;
            for(int i=0;i<nums.size();i++){
                if (nums[x] == nums[i]){
                    z++;
                }
            }
            if (z % 2 != 0){
                return false;
            }
          x++;
        }
    return true;        
    }
};
