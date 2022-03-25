//https://leetcode.com/contest/biweekly-contest-74/problems/minimum-operations-to-halve-array-sum/

//Type:Max Heap

class Solution {
public:
    int halveArray(vector<int>& nums) {
        vector<double>arr(nums.size());
        double total=0.0;
        
        priority_queue<double>q;
        
        for(int i=0;i<nums.size();i++){
            double val=(double)nums[i];
            q.push(val);
            total+=val;        
        }
        double half=total/2;
        
        double sum=0.0;
        int ans=0;
        while(half>sum){
            ans++;
            double val=q.top();
            q.pop();
            val=val/2;
            sum+=val;
            q.push(val);
        }
        return ans;
    }
};