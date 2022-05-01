class Solution {
public:
    string giv(string s){
        string a1="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                if(a1.size()>0) a1.pop_back();
            }
            else{
                a1+=s[i];
            }
        }
        return a1;
    }
    bool backspaceCompare(string s, string t) {
        return giv(s)==giv(t);
    }
};