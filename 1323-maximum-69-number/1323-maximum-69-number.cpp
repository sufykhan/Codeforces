class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        string ans="";
        bool flg=true;
        for(auto x:s){
            if(x=='6'&&flg) ans+='9',flg=false;
            else ans+=x;
        }
        int val=stoi(ans);
        return val;
        
    }
};