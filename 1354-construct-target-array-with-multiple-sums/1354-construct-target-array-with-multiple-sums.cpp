class Solution {
public:
    bool isPossible(vector<int>&v) {
        priority_queue<long long int>q;
        long long int sum=0;
        for(int i=0;i<v.size();i++){
            q.push(v[i]);
            sum+=v[i];
        }
        if(v.size()==1){
            if(sum==1) return true;
            else return false;
        }
        while(!q.empty()){
            long long int target=q.top();
            q.pop();
            long long int div=sum-target;
        
            if(div>=target) return false;
            if(div==0) return false;
            long long int newx=target%div;
            if(div==1) newx=1;
            if(newx==0) return false;
            q.push(newx);
            sum=div+newx;
            //cout<<target<<" "<<
            if(sum==v.size()) return true;
        
        }
        return true;
    }
};