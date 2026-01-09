class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for( char c : s){
            if(c=='(')st.push(')');
            if(c=='[')st.push(']');
            if(c=='{')st.push('}');
            else if(c==')' || c=='}' || c==']'){
                if(!st.empty() && st.top()==c)st.pop();
                else return false;
            }
        }
        return st.empty();
    }
};