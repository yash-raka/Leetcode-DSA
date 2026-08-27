class Solution {
    private: 
    void dfs(int city, vector<vector<int>>& isC, vector<int>& vis){
        vis[city] = 1;
        int n = isC.size();

        for (int i=0;i<n;i++){
            if (isC[city][i] == 1 && !vis[i]){
                dfs(i, isC, vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isC) {
        int n = isC.size();
        vector<int> vis(n, 0);
        int count = 0;

        for (int i=0;i<n;i++){
            if (!vis[i]){
                count++;
                dfs(i, isC, vis);
            }
        }
    return count;
    }
};