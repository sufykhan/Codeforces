class Solution {
public:
    int comp(vector<int>nums){
        
        int global=INT_MIN;
        int tot=0;
        for(int i=0;i<nums.size();i++){
            if(tot+nums[i]<0){
                
                tot=0;
                
            }
            else{
                tot+=nums[i];
                global=max(global,tot);
            }
        }
        return global;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        
        
        int simple=comp(nums);
        cout<<simple<<"\n";
        if(simple==INT_MIN){
            int maxiE=*max_element(nums.begin(),nums.end());
            return maxiE;
        }
        
        int total=0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
            nums[i]=nums[i]*(-1);
        }
        
        int negation=comp(nums);
        
        cout<<negation<<"\n";
        negation=total+negation;
        
        simple=max(negation,simple);
       
        return simple;
        
    }
};