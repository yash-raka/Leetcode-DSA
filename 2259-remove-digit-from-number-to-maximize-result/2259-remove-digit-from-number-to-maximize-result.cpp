class Solution {
public:
    bool r(string b,string a){
        // cout<<b<<" "<<a<<endl;
        for(int i=0;i<b.size();i++){
            if(b[i]<a[i]){
                return true;
            }
            else if(b[i]!=a[i]){
                return false;
            }
        }
        return false;
    }
    // string r(string s,int i,int j){
    //     string t="";
    //     for(int a=i;a<=j;a++){
    //         t+=s[a];
    //     }
    //     return t;
    // }
    string removeDigit(string nu, char di) {
        string b = "";
        // int x = INT_MIN;
        for (int i=0;i<nu.size();i++){
            if (nu[i] == di){
                string a = nu.substr(0,i) + nu.substr(i+1,nu.size()-i+1);
                //string a = r(nu,0,i-1) + r(nu,i+1,nu.size()-1);
                // cout<<a<<" ";
                if (b=="" || r(b,a)){
                    b = a;
                }
            }
        }
    return b;  
    }
};