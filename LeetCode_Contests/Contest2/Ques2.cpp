class Solution {
public:
    //1hrs 5min left
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        int maxi=nums[0],ans=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>=(maxi-k)){
                
            }
            else{
                ans++;
                maxi=nums[i];
            }
        }
        return ans;
    }
};