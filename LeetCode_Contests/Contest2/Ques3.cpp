class Solution {
public:
    //55min 30sec left
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>&quer) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<quer.size();i++){
                int x=mp[quer[i][0]];
                mp.erase(quer[i][0]);
                mp[quer[i][1]]=x;
        }
        vector<int>ans(nums.size());
        for(auto& xx:mp){
            int idx=xx.second,val=xx.first;
            ans[idx]=val;
        }
        return ans;
    }
};