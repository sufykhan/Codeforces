class Solution {
public:
    int minOperations(vector<int>& nums, int target) {
       //Sliding Window Concept
        
       // XXX****XXX => if our ans is XXXXXX then we can calculate for *****
        
        int val=0,n=nums.size();
        for(auto x:nums){
            val+=x;
        }
        val=val-target;
        
        if(val<0){
            return -1;
        }
        
        int startX=0,endX=0,rSum=0,ans=INT_MAX;
        
        while(endX<n){
            
            rSum+=nums[endX];
            
            while(rSum>val){
                rSum-=nums[startX];
                startX++;
            }
            
            if(rSum==val){
                ans=min(ans,n-(endX-startX+1));
            }
            
            endX++;
        }
        if(ans==INT_MAX) return -1;
        return ans;
        
    }
};