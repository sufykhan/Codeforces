class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>subs={nums[0]};
        for(int i=1;i<nums.size();i++){
            if(nums[i]>subs.back()){
                subs.push_back(nums[i]);
            }
            else{
                auto it=lower_bound(subs.begin(),subs.end(),nums[i]);
                *it=nums[i];
            }
        }
        return (int)subs.size();
    }
};