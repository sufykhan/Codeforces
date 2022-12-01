class Solution {
public:
   
    bool halvesAreAlike(string s) {
        int cnt1=0,cnt2=0;
        string y="aeiouAEIOU";
        map<char,bool>mp;
        for(auto x:y){
            mp[x]=true;
        }
        int n=s.size();
        
        for(int i=0;i<n/2;i++){
            if(mp.find(s[i])!=mp.end()) cnt1++;
        }
        for(int i=n/2;i<n;i++){
            if(mp.find(s[i])!=mp.end()) cnt2++;
        }
        return cnt2==cnt1;
    }
};