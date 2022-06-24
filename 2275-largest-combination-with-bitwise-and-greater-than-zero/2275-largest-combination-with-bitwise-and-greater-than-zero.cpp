class Solution {
public:
    //23min
    int largestCombination(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int val=nums[i],cnt=0;
            while(val>0){
                if(val&1) mp[cnt]++;
                val=val>>1;
                cnt++;
            }
        }
        int maxi=0;
        for(auto &x:mp){
            maxi=max(maxi,x.second);
        }
        return maxi;
    }
};