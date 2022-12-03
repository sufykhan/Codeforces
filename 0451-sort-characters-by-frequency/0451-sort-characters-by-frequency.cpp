class Solution {
public:
    
    static bool comp(pair<char,int>&a,pair<char,int>&b){
        
        if(a.second==b.second){
            return (a.first<b.first);
        }
        return a.second>b.second;
       
    }
    string frequencySort(string s) {
        map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }
        vector<pair<char,int>>v;
        for(auto x:mp){
            v.push_back({x.first,x.second});
        }
        sort(v.begin(),v.end(),comp);
        string ans="";
        for(auto x:v){
            for(int i=0;i<x.second;i++){
                ans+=x.first;
            }
            
        }
        return ans;
    }
};