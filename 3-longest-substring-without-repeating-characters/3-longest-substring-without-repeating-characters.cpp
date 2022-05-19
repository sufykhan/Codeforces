class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        
        unordered_map<char,int>mp;
        int maxi=0,prev=0;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()&& mp[s[i]]>=prev){
                prev=mp[s[i]]+1;
            }
            mp[s[i]]=i;
            maxi=max(maxi,i-prev+1);
        }
        
        return maxi;
        
    }
};