class Solution {
public:
    bool isCircularSentence(string s) {
   
        bool a = true;
        for (int i=0;i<s.size();i++){
            if (s[i] == ' '){
                if (s[i-1] != s[i+1]){
                    a = false;
                    break;
                }
            } else {
                if (i == s.size()-1){
                    if (s[0] == s[i]){
                        a = true;
                    } else {
                        a = false;
                    }
                }
            }
        }
    return a; 
    }
};