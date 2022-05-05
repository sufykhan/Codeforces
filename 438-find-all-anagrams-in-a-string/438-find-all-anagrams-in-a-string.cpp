class Solution {
public:
    
    
    bool check(map<char,int>&mp){
        for(auto x:mp){
            if(x.second!=0){
                return false;
            }
        }
        return true;
    }
    
    vector<int> findAnagrams(string s, string p) {
        
        map<char,int>mp;
        vector<int>ans;
        for(auto x:p){
            mp[x]++;
        }
        
        for(int i=0;i<p.size();i++){
            mp[s[i]]--;
        }
        for(int i=0;i+p.size()<=s.size();i++){
            
            if(check(mp)){
                ans.push_back(i);
            }
            mp[s[i]]++;
            mp[s[i+p.size()]]--;
            
        }
        return ans;
        
    }
};