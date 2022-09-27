class Solution {
public:
    string pushDominoes(string s) {
        int n=s.size();
        vector<int>val(n,0);
        int f=0;
        for(int i=0;i<n;i++){
            if(s[i]=='R') f=n;
            else if(s[i]=='.') f=max(f-1,0);
            else f=0;
            
            val[i]+=f;
        }
        f=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='L') f=n;
            else if(s[i]=='.') f=max(f-1,0);
            else f=0;
            
            val[i]-=f;
        }
        string ans="";
        for(auto x:val){
            if(x<0) ans+='L';
            else if(x>0) ans+='R';
            else ans+='.';
        }
        return ans;
    }
};