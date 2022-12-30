class Solution {
public:
    int connectSticks(vector<int>& nums) {
        int cost=0;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto x:nums){
            pq.push(x);
        }
        while(pq.size()!=1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            cost+=x+y;
            pq.push(x+y);
        }
        return cost;
        
    }
};