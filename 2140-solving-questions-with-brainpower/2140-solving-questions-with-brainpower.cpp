class Solution {
public:
    long long mostPoints(vector<vector<int>>& que) {
        int n = que.size();
        vector<long long> dp(n+1, 0);
        for (int i=n-1;i>=0;i--) {
            long long t = que[i][0];
              if ((i+que[i][1]+1) < n) {
                t += dp[i+que[i][1]+1];
            }
            long long nt = dp[i+1];
            dp[i] = max(t, nt);
        }
    return dp[0];
    }
};