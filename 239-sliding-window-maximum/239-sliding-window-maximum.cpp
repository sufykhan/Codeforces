
struct Compare{
    bool operator()(const pair<int,int>&a,const pair<int,int>&b){
        return a.first<b.first;
    }
};

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,Compare>q;
        for(int i=1;i<=nums.size();i++){
            q.push({nums[i-1],i});
            
            if(i<k){
                continue;
            }
            int pos;
            while(!q.empty()){
                pos=q.top().second;
                if(pos<=i-k){
                    q.pop();
                }
                else{
                    break;
                }
            }
            ans.push_back(q.top().first);
            
        }
        
        return ans;
    }
};