class Solution {
public:
    int finalValueAfterOperations(vector<string>& ops) {
        int x = 0;
        for (int i=0;i<ops.size();i++){
            if (ops[i] == "--X"){
                x -= 1;
            } else if (ops[i] == "X--"){
                x -= 1;
            } else if (ops[i] == "X++"){
                x += 1;
            } else if (ops[i] == "++X"){
                x += 1;
            }
        }
    return x;
    }
};