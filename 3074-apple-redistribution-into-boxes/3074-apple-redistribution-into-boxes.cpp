class Solution {
public:
    int minimumBoxes(vector<int>& ap, vector<int>& ca) {
        int sum = 0;
        for (int i=0;i<ap.size();i++){
            sum += ap[i];
        }
        int x = 0;
        int y = 0;
        sort(ca.begin(), ca.end());
        for (int i=ca.size()-1;i>=0;i--){
            if (x < sum){
                x += ca[i];
                y++;
            } else {
                break;
            }
        }
    return y;
    }
};