#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        unordered_map<char, char> A;
        unordered_set<char> u; 

        for (int i=0;i<s.size();i++){
            char o = s[i];
            char r = t[i];

            if (A.find(o) == A.end()){
                if (u.find(r) == u.end()){
                    A[o] = r;
                    u.insert(r);
                } else {
                    return false;
                }
            } else {
                char mappedCharacter = A[o];
                if (mappedCharacter != r ){
                    return false;
                } 
            }
        }
        
    return true;
    }
};