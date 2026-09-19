class Solution {
public:
    string removeOuterParentheses(string s) {
        string str;
        int balance = 0; /*To keep the track of balance parantheses*/

        for(char ch : s){
            if(ch == '('){
                if(balance > 0) str += ch; /*balance > 0 means '(' is not the outermost bracket*/
                balance++;
            }
            else{
                balance--;
                if(balance > 0) str += ch; 
            }
        }

        return str;
    }
};