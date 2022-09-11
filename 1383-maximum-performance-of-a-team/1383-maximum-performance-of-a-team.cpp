class Solution {
public:
    int maxPerformance(int n, vector<int>& sp, vector<int>& eff, int k) {
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            v[i]={eff[i],sp[i]};
        }
        sort(v.rbegin(),v.rend());
        priority_queue<int,vector<int>,greater<int>>pq;
        
        long long int ans=0,sum=0;
        for(auto &[e,s]:v){
            pq.emplace(s);
            sum+=s;
            if(pq.size()>k){
                sum-=pq.top();
                pq.pop();
            }
            ans=max(ans,sum*e);
        }
        return ans% (int)(1e9+7);
    }
};