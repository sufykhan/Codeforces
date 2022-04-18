class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>q;
        for(int i=0;i<nums.size();i++){
            q.push(nums[i]);
        }
        while(k!=0)
        {
             int val1=q.top();
             q.pop();
             q.push(val1+1);
             k--;
        }
        int mod=1e9+7;
        long long ans=1LL;
        while(!q.empty()){
            ans=(ans*1LL*q.top())%mod;
            q.pop();
        }
        int val=ans%mod;
        return ans;
        
    }
};