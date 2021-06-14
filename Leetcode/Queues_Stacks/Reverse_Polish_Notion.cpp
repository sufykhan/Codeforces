#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int eval(vector<string>& tokens) {
        int n=tokens.size();
        stack<string>st;
        for(int i=0;i<n;i++){
            st.push(tokens[i]);
            int z,flag=0;
            while(!st.empty() && (st.top()=="*"||st.top()=="/" ||st.top()=="+" ||st.top()=="-" )){
                string op=st.top();
                st.pop();
                int y=stoi(st.top());
                st.pop();
                int x=stoi(st.top());
                st.pop();
                if(op=="+"){
                    z=x+y;
                }
                else if(op=="-"){
                    z=x-y;
                }
                else if(op=="/"){
                    z=x/y;
                   
                }
                else{
                    z=x*y;
                   
                }
                flag=1;
            }
            stringstream ss;
            ss << z;
            string str = ss.str();
            if(flag==1) st.push(str);
           
        }
        return stoi(st.top());
    }
};

int main(void){
    Solution s;
    vector<string>v{"3","11","5","+","-"};
    int x=s.eval(v);
    cout<<x<<"\n";
    return 0;
}
