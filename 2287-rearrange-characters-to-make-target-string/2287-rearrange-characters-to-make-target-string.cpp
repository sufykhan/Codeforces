class Solution {
public:
   // 19min
        
    int rearrangeCharacters(string s, string s2) {
        // int idx=0,ans=0,i=0,prev=0;
        // while(i<s.size()){
        //     if(s[i]==s2[idx]){
        //         if(idx==0) prev=i;
        //         s[i]='#';
        //         idx++;
        //     }
        //     if(idx==s2.size()) idx=0,ans++;
        //     i++;
        // }
        // return ans;
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int ans=INT_MAX;
        map<char,int>f;
        for(int i=0;i<s2.size();i++){
            f[s2[i]]++;
        }
        for(auto &val:f){
            int div=val.second;
            char xx=val.first;
            if(mp.find(xx)==mp.end()) return 0;
            int maxi=mp[xx]/div;
            ans=min(maxi,ans);
        }
        return ans;
    }
};