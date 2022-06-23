class Solution {
public:

    int scheduleCourse(vector<vector<int>>&nums) {
        
        int cnt=0,maxi=0;
        sort(nums.begin(),nums.end(),[](const vector<int>&a,const vector<int>&b){ return b[1]>a[1];});
        
        priority_queue<int>pq;
        
        for(int i=0;i<nums.size();i++){
             if(cnt+nums[i][0]<=nums[i][1]){
                 cnt=cnt+nums[i][0];
                 pq.push(nums[i][0]);
             }   
             else if(!pq.empty() && pq.top()>nums[i][0]){
    
                     cnt=cnt+nums[i][0]-pq.top();
                     pq.pop();
                     pq.push(nums[i][0]);
             
             }
        }
        return pq.size();
    }
};