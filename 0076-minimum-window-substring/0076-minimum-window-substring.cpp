class Solution {
public:
    
    bool check(unordered_map<char,int>&mp1,unordered_map<char,int>&mp2){
        
        for(auto x='A';x<='Z';x++){
            if(mp1[x]>=mp2[x]){
                
            }
            else{
                return false;
            }
        }
        for(auto x='a';x<='z';x++){
            if(mp1[x]>=mp2[x]){
                
            }
            else{
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
         
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp;
        
        int pos1=-1,pos2=-1,mini=INT_MAX;
        int j=0;
        for(auto x:t) mp1[x]++;
        
        for(int i=0;i<s.size();i++){
            
            mp[s[i]]++;
            
            while(i>=j && check(mp,mp1)){
                
                if(mini>i-j+1){
                    
                    pos1=i;
                    pos2=j;
                    mini=i-j+1;
                }
                mp[s[j]]--;
                if(mp[s[j]]==0) mp.erase(mp.find(s[j]));
                j++;
            }
            
        }
        string ans="";
        if(pos1==-1) return ans;
        for(int i=pos2;i<=pos1;i++) ans+=s[i];
        return ans;
    }
};