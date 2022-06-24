class Solution {
public:
    //10min
    int maxConsecutive(int bottom, int top, vector<int>& nums) {
        
        int maxi=INT_MIN;
        int b,t,flag=false;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=bottom && nums[i]<=top){
                if(flag) maxi=max(maxi,nums[i]-nums[i-1]-1);
                else b=nums[i],flag=true;
                t=nums[i];
            }
            
        }
        maxi=max(maxi,b-bottom);
        maxi=max(maxi,top-t);
        return maxi;
    }
};