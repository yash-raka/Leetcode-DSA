class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string s = "balloon";
        unordered_map<char, int> ans;
        unordered_map<char, int> bal;
        for (int i=0;i<text.size();i++){
            ans[text[i]]++;
        }
        for (int i=0;i<s.size();i++){
            bal[s[i]]++;
        }
        int b = ans['b'] / bal['b'];  
        int a = ans['a'] / bal['a'];  
        int l = ans['l'] / bal['l'];  
        int o = ans['o'] / bal['o'];  
        int n = ans['n'] / bal['n'];  
        int x = min({b, a, l, o, n});

        return x;

    }
};