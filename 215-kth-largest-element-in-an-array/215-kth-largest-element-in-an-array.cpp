class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>q;
        for(int i=1;i<=nums.size();i++){
            q.push(nums[i-1]);
            if(i>k){
                q.pop();
            }
        }
        return q.top();
        
    }
};