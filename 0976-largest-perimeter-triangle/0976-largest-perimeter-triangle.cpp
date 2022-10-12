class Solution {
public:
    //2 3 3 6
    int check(vector<int>&nums){
        bool flg=true;
        for(int x=0;x<3;x++){
             if(nums[(x+0)%3]+nums[(x+1)%3]<=nums[(x+2)%3]){
                 flg=false;
             }
        }
        if(flg){
            return accumulate(nums.begin(),nums.end(),0);
        }
        return 0;
    }
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int maxi=0;
        for(int i=0;i<nums.size()-2;i++){
            vector<int>val={nums[i],nums[i+1],nums[i+2]};
            maxi=max(maxi,check(val));
        }
        return maxi;
        
    }
};