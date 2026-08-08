class Solution {
public:
    string largestGoodInteger(string num) {
        string x = "";
    
        for (int i=0;i<num.size()-2;i++){
            if (num[i] == num[i+1] && num[i+1] == num[i+2]){
                string arr = "";
                
                arr += (num[i]);
                arr += (num[i+1]);
                arr += (num[i+2]);
                
                if (arr > x){
                    x = arr;
                }
            }
        }
        return x;
    }
};