class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());
        int x = 0;
        int y = 0;
        while (x < s.size() && y < g.size()){
            if (g[y] <= s[x]){
                y++;
            }
            x++;
        }
    return y;
    }
};