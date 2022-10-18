class Solution {
public:
    string to(string x){
        int n=x.length();
        x+='*';
        int cnt=0;string ans="";
        for(int i=0;i<n;i++){
            if(x[i]!=x[i+1]){
                ans+=char('0'+cnt+1);
                ans+=x[i];
                cnt=0;
            }
            else{
                cnt++;
            }
        }
        return ans;
    }
    string countAndSay(int n) {
        string ans;
        if(n==1) return "1";
        ans=to(countAndSay(n-1));
        return ans;
    }
};