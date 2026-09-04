class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> ans;
        for (int i=0;i<arr.size();i++){
            ans[arr[i]]++;
        }

        string a = "";  
        int x = 1;
        for (int i=0;i<arr.size();i++){
            if (ans[arr[i]] == 1 && x == k){
                a = arr[i];
                break;
            } else if (ans[arr[i]] == 1){
                x++;
            }
        }
    return a;
    }
};