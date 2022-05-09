class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3) return 0;
        
        int ans=0;
        
        int curr=nums[1]-nums[0],prev,cnt=0;
        for(int i=1;i<nums.size()-1;i++){
            prev=nums[i+1]-nums[i];
            if(prev==curr){
                cnt++;
            }
            else{
                curr=prev;
                cnt=0;
            }
            ans+=cnt;
            
        }
        return ans;
        
    }
};