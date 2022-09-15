class Solution {
public:
    vector<int> findOriginalArray(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        map<int,int>mp;
        for(auto x:arr) mp[x]++;
        vector<int>ans;
        for(auto x:arr){
            if(mp.find(x)!=mp.end() && mp.find(2*x)!=mp.end()){
                mp[x]--;
                mp[2*x]--;
                
                if(mp[x]<0) return {};
                
                if(mp[x]==0) mp.erase(mp.find(x));
                if(mp[2*x]==0) mp.erase(mp.find(2*x));
                ans.push_back(x);
            }
        }
        if(mp.size()==0){
            return ans;
        }
        return {};
    }
};