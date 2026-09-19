class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st; /*Helping Stack so that we can counter the adjacent duplicate element*/
        string str; /*String for result*/

        for(auto ch : s){
            if(!st.empty() && ch == st.top()){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }

        while(!st.empty()){
            str += st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};