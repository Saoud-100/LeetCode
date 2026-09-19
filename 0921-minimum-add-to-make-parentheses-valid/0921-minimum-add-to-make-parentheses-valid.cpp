class Solution {
public:
    int minAddToMakeValid(string s) {
        int openCount = 0, closeCount = 0;
        stack<char> st;

        for(auto ch : s){
            if(ch == '('){
                st.push(ch);
                openCount++;
            }
            else{
                if(!st.empty()){
                    st.pop();
                    openCount--;
                }
                else{
                    closeCount++;
                }
            }
        }

        return openCount + closeCount;
    }
};