class Solution {
public:
    bool check(int val,vector<int>&nums){
        long long int cnt=0;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>val){
                cnt+=nums[i]-val;
            }
            else{
                int x=min(cnt,1LL*(val-nums[i]));
                cnt-=x;
            }
        }
        return cnt==0;
   
    }
    int minimizeArrayValue(vector<int>& nums) {
        int l=nums[0],r=*max_element(nums.begin(),nums.end());
        while(r>=l){
            int mid=l+(r-l)/2;
            if(check(mid,nums)){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};