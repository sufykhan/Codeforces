class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q;
        for(int i=0;i<stones.size();i++){
            q.push(stones[i]);
        }
        while(q.size()>1){
            
            int front1=q.top();
            q.pop();
            int front2=q.top();
            q.pop();
            if(front1!=front2){
                q.push(front1-front2);
            }
        }
        
        if(q.empty()){
            return 0;
        }
        return q.top();
        
    }
};