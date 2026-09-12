class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (int i = 0; i < tokens.size(); i++) {
            string temp = tokens[i];

            if (temp == "+" || temp == "-" || temp == "*" || temp == "/") {
                int n1 = st.top();
                st.pop();

                int n2 = st.top();
                st.pop();

                if (temp == "+") {
                    st.push(n2 + n1);
                }
                else if (temp == "-") {
                    st.push(n2 - n1);
                }
                else if (temp == "*") {
                    st.push(n2 * n1);
                }
                else if (temp == "/") {
                    st.push(n2 / n1);
                }
            }
            else {
                st.push(stoi(temp));
            }
        }

        return st.top();
    }
};