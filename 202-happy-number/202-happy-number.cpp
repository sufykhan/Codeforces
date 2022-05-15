class Solution {
public:
    // bool check(int x){
    //      if(x==1 ||x==10|| x==100 || x==68 || x==86 || x==28 || x==82 || x==19 || x==91||x==13||x==31||x==23||x==32)          {
    //         return true;
    //      }
    //      return false;
    // }
    // int cnt(int n){
    //     string s=to_string(n);
    //     return s.length();
    // }
    bool isHappy(int n) {
         map<int,int>mp;
         
         while(mp[n]<=1){
             mp[n]++;
             string s=to_string(n);
             int num=0;
             for(int i=0;i<s.length();i++){
                 num+=(s[i]-'0')*(s[i]-'0');
             }
             n=num;
             if(n==1) return true;
         }
         return false;
    }
};