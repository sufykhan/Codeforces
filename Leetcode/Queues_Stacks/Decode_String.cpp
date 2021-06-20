#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    stack<char>s;
    string decodeString(string str) {
        for(int i=0;i<str.size();i++){
            s.push(str[i]);
            if(str[i]==']'){
                s.pop();
                string s2="";
                while(s.top()!='['){
                    s2+=s.top();
                    s.pop();
                }
                s.pop();
                
                int digit=1,cnt=0;
                int yet=s.top()-'0';
                while(yet>=0 && yet<10){
                    cnt+=digit*yet;
                    digit=digit*10;
                    s.pop();
                    if(!s.empty()) yet=s.top()-'0';
                    else yet=-1;
                }
                for(int x=0;x<cnt;x++){
                     for(int j=s2.length()-1;j>=0;j--){
                    s.push(s2[j]);
                }
                }
               
                
            }
            
        }
        string ans="";
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

int main(){
    return 0;
}

