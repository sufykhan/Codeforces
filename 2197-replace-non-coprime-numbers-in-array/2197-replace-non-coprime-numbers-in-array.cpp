class Solution {
public:
    vector<int> check(vector<int>nums){
        vector<int>ans;
        int prev=nums[0];
        nums.push_back(INT_MAX);
        for(int i=1;i<nums.size();i++){
              int gcd=__gcd(nums[i],prev);
              if(gcd==1){
                  ans.push_back(prev);
                  prev=nums[i];
              }
              else{
                  prev=(nums[i]*1LL*prev)/gcd;
              }
        }
        return ans;
    }
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        
        vector<int>x1=check(nums);
        reverse(nums.begin(),nums.end());
        vector<int>x11=check(nums);
        bool flg=false;
        if(x11.size()<x1.size()){
            flg=true;
            x1=x11;
        }
        vector<int>x2=check(x1);
        while(x1!=x2){
            x1=x2;
            x2=check(x1);
        }
        if(flg) reverse(x1.begin(),x1.end());
        return x1;
        
        
    }
};