class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int j=0,tot=0,ans=0;
        for(int i=0;i<nums.size();i++){
            while((tot&nums[i])!=0){
                tot=tot^nums[j++];
            }
            ans=max(ans,i-j+1);
            tot=tot|nums[i];
        }
        return ans;
    }
};