class Solution {
public:
    string breakPalindrome(string s) {
        int n=s.size();
        if(n==1) return "";
        for(int i=0;i<s.size();i++){
            if(s[i]!='a' && i!=n-i-1){
                s[i]='a';
                return s;
            }
        }
        s[n-1]='b';
        return s;
    }
};