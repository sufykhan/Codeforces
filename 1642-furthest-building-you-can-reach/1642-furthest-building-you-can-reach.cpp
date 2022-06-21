class Solution {
public:
    int furthestBuilding(vector<int>& nums, int tot, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        int cnt=0,sum=0,i=0;
        for(i=1;i<nums.size();i++){
            int val=nums[i]-nums[i-1];
            if(val>0){
                cnt++;
                pq.push(val);
                if(cnt>k){
                    int x=pq.top();
                    pq.pop();
                    sum+=x;
                    if(sum>tot){
                        break;
                    }
                }
                
                
            }
           
        }
        return i-1;
    }
};