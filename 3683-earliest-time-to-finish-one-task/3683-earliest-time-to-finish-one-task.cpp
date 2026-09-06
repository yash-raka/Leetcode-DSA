class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int m = tasks.size();
        int fin = INT_MAX;
        for (int i=0;i<m;i++){
            int x = 0;
            x =  tasks[i][0] + tasks[i][1];
            fin = min(x, fin);
        }
    return fin;
    }
};