class Solution {
public:
    void computeLPS(string s,vector<int>&pref){
        for(int i=1;i<s.size();i++){
            int j=pref[i-1];
            while(j>0&&s[i]!=s[j]){
                j=pref[j-1];
            }
            if(s[i]==s[j]){
                j++;
            }
            pref[i]=j;
        }
    }
    int strStr(string s, string n) {
        
        vector<int>pref(n.size(),0);
        computeLPS(n,pref);
        
        int i=0,j=0;
        while(i<s.size()){
            if(s[i]==n[j]){
                i++;
                j++;
            }
            if(j==n.size()){
                return i-j;
            }
            
            if(i<s.size() && s[i]!=n[j]){
                if(j!=0){
                    j=pref[j-1];
                }
                else{
                    i++;
                }
            }
        }
        return -1;
    }
};