class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(!st.empty()){
            if(st.top()=='(' && s[i]==')'){
                st.pop();
                continue;
            }
            if(st.top()=='{' && s[i]=='}'){
                st.pop();
                continue;
            }
            if(st.top()=='[' && s[i]==']'){
                st.pop();
                continue;
            }
            // if(st.empty()&& (s[i]=='}'||s[i]==']'||s[i]==')')){
            //     return false;
            // }
            }
            st.push(s[i]);
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};