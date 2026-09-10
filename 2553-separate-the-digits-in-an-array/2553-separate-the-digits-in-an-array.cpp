class Solution {
public:
    vector<int> separateDigits(vector<int>& n) {
        vector<int> ans;
        vector<int> arr;
        for (int i=0;i<n.size();i++){
            while (n[i] != 0){
                ans.push_back(n[i]%10);
                n[i] = n[i]/10;
            }
            reverse(ans.begin(), ans.end());
            for (int i=0;i<ans.size();i++){
                arr.push_back(ans[i]);
            }
            ans.clear();
        }
    return arr;
    }
};