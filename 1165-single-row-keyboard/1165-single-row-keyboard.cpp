class Solution {
public:
    int calculateTime(string k, string w) {
        map<int,int>mp;
        for(int i=0;i<k.size();i++){
            mp[k[i]-'a']=i;
        }
        int ans=0,prev=0;
        for(auto x:w){
            ans+=abs(mp[x-'a']-prev);
            prev=mp[x-'a'];
        }
        return ans;
    }
};