class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string,int>mp;
            map<string,int>mp2;
        for(auto x:words){  
            mp2[x]++;
            sort(x.begin(),x.end());
            mp[x]++;
        }
        int ans=0;
        bool flg=true;
        for(auto x:mp){
           string s1=x.first;
           string s2=x.first;
           reverse(s2.begin(),s2.end());
           
           if(s1==s2){
              
               if(flg && mp2[s1]%2==1) ans+=2,flg=false;
              
               int eve=mp2[s1]/2;
               ans+=eve*4;
               continue;
           }
           if(mp2.find(s2)==mp2.end()) continue;
            
           int common=min(mp2[s2],mp2[s1]);
           ans+=4*common;
        }
        return ans;
    }
};