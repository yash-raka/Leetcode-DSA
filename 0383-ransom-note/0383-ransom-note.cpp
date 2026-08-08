class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arrR[26] = {};
        int arrM[26] = {};

        for (char ch : ransomNote){
            arrR[ch - 'a']++;
        }
        for (char ch : magazine){
            arrM[ch - 'a']++;
        }
        for (int i=0;i<26;i++){
            if (arrR[i] > arrM[i]){
                return false;
            }
        }
    return true;    
    }
};