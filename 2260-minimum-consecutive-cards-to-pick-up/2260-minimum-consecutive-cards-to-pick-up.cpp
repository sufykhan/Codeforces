class Solution {
public:
    int minimumCardPickup(vector<int>& arr) {
        map<int,int>mp;
        int ans=INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])!=mp.end()){
                ans=min(ans,i-mp[arr[i]]+1);
            }
            mp[arr[i]]=i;
        }
        if(ans==INT_MAX) return -1;
        return ans;
        
    }
};