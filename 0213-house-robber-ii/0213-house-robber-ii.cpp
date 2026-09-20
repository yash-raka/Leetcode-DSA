class Solution {
public:
    int rob(vector<int>& nums) {
        long long x = 0;
        int n = nums.size();
        if (n == 1) return nums[0];
        vector<int> dp(n);
        dp[0] = nums[0];

        for (int i=1;i<n-1;i++){
            long long t = nums[i];
            if (i>1){
                t += dp[i-2];
            } 
            long long nt = dp[i-1];
            dp[i] = max(t, nt);

        }
        x = dp[n-2];
        
        long long y = 0;
        vector<int> dp1(n);
        dp1[1] = nums[1];

        for (int i=2;i<n;i++){
            long long a = nums[i];
            a += dp1[i-2];
            long long bt = dp1[i-1];
            dp1[i] = max(a, bt);

        }
        y = dp1[n-1];

    return max(x, y);
    }
};