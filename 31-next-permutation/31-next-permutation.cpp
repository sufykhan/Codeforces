class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        // 1 2 5 4 1
        // 5>2 => 2 need to displace with next greater element (4)
        // 1 4|(5 2 1) => reverse bracket part to get smallest value after swapped element(4)
        // 1 4 1 2 5 => Ans
        
        int n=nums.size();
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                int pos=i;
                for(int j=i+1;j<n;j++){
                    if(nums[j]>nums[i-1]) pos=j;
                }
                swap(nums[pos],nums[i-1]);
                reverse(nums.begin()+i,nums.end());
                return;
            }
        }
        reverse(nums.begin(),nums.end());
        
    }
};