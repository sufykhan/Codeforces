class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int l=1,r=1,cntl=0,cntr=0;
        int maxi=INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                nums[i]=1;
            }
            else if(nums[i]<0){
                nums[i]=-1;
            }
        }
        
        for(int i=0;i<nums.size();i++){
           
           if(l==0){
               cntl=0;
           }
           if(r==0){
               cntr=0;
           }
            
           l=(l?l:1)*nums[i];
           
           cntl++;
           
           if(l>0){
               maxi=max(maxi,cntl);
           }
            
           r=(r?r:1)*nums[nums.size()-i-1];
           cntr++;
           if(r>0){
               maxi=max(maxi,cntr);
           }
            
        }
        if(maxi==INT_MIN) return 0;
        return maxi;
        
    }
};