class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int i=1;
        int pos=-1;
        for(auto &x:nums){
            mp[x]=i;
            if(2*x==target){
                if(pos==-1) pos=i-1;
                else{
                    return {pos,i-1};
                }
            }
            i++;
            
        }
        for(auto &x:nums){
            int y=target-x;
            cout<<y<<" ";
            if(mp.find(y)!=mp.end() &&target!=2*x){
                return {mp[x]-1,mp[target-x]-1};
            }
        }
        return {};
    }
};