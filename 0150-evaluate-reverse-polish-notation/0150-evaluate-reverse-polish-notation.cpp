class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(auto ele : tokens) {

            if(ele != "+" && ele != "-" && ele != "*" && ele != "/") {
                st.push(stoi(ele));
            }
            else {
                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                if(ele == "+") st.push(a + b);

                else if(ele == "-") st.push(a - b);

                else if(ele == "*") st.push(a * b);

                else if(ele == "/") st.push(a / b);
            }
        }

        return st.top();
    }
};