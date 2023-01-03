class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int prev=0,tot=0,ans=0,flg=0;
        nums.push_back(0);
        for(int i=0;i<nums.size();i++){
            tot+=nums[i];
            if(nums[i]==0){
                flg++;
                ans=max(ans,tot+1);
                tot=tot-prev;
                prev=tot;
                
            }
        }
        if(flg==1) ans--;
        return ans;
    }
};