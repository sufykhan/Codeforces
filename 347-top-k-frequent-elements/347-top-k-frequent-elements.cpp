class Solution {
public:
    
 
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>ans;
        for(auto x:nums){
            mp[x]++;
        }
        vector<pair<int,int>>val;
        for(auto x:mp){
            val.push_back({x.first,x.second});
        }
        sort(val.begin(),val.end(),[](pair<int,int>&a,pair<int,int>&b){
        return b.second<a.second;
    });
        
        for(int i=0;i<k;i++){
            ans.push_back(val[i].first);
        }
        return ans;
    }
};