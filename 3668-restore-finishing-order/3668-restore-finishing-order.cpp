class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;
        for (int j=0;j<order.size();j++){
            for (int i=0;i<friends.size();i++){
                if (order[j] == friends[i]){
                    ans.push_back(order[j]);
                    break;
                }
            }
        }
    return ans;
    }
};