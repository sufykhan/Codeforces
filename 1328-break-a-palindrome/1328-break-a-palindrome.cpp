class Solution {
public:
    string breakPalindrome(string s) {
        if(s.size()==1) return "";
        char ch='a';
        bool flg=false;
        int n=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]!=ch){
                if(n%2==1 && i==(n/2)){
                    
                }
                else {flg=true;
                }
            }
        }
        if(!flg){
            s.pop_back();
            s.push_back('b');
            return s;
        }
        else{
            for(int i=0;i<s.size();i++){
                if(s[i]!='a'){
                    s[i]='a';
                    return s;
                }
            }
        }
        return "";
    }
};