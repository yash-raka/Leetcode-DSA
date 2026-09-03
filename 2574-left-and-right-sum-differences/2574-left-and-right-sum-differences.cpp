class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        vector<int> answer;
        
        int x = 0;
        int y = 0;
        left.push_back(x);
        for (int i=0;i<nums.size()-1;i++){
            x += nums[i];
            left.push_back(x); 
            y += nums[i+1];
        }

        for (int i=1;i<nums.size();i++){
            right.push_back(y);
            y -= nums[i];
        }
        right.push_back(0);

        for (int i=0;i<nums.size();i++){
            answer.push_back(abs(left[i]-right[i]));
        }
    return answer;
    }
};