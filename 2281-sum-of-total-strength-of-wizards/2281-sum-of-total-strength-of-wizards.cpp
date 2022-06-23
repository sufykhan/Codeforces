class Solution {
public:
    #define MOD 1000000007
    int totalStrength(vector<int>& strength) {
        int n = strength.size();
        
        vector<long long> prefsum(n+2),suffsum(n+2);
        vector<long long> double_prefsum(n+2),double_suffsum(n+2);
        
        for(int i=1;i<=n;i++){
            prefsum[i] = (prefsum[i-1] + strength[i-1])%MOD;
            double_prefsum[i] = (double_prefsum[i-1] + prefsum[i])%MOD;
        }
        
        for(int i=n;i>=1;i--){
            suffsum[i] = (suffsum[i+1] + strength[i-1])%MOD;
            double_suffsum[i] = (double_suffsum[i+1] + suffsum[i])%MOD;
        }
        
        stack<int> s1,s2;
        vector<int> left(n,-1),right(n,n);
        
        for(int i=0;i<n;i++){
            while(!s1.empty() and strength[s1.top()]>=strength[i]){
                right[s1.top()] = i;
                s1.pop();
            }
            s1.push(i);
        }
        
        for(int i=n-1;i>=0;i--){
            while(!s2.empty() and strength[s2.top()]>strength[i]){
                left[s2.top()] = i;
                s2.pop();
            }
            s2.push(i);
        }
        
        auto queryLeftSum = [&](int l,int r){
            if(l>r){
                return 0;
            }
            
            long long d = r - l + 1;
            long long toSubtract = (d*suffsum[r+2])%MOD;
            
            long long ans = (double_suffsum[l+1] - double_suffsum[r+2] + MOD)%MOD;
            ans = (ans-toSubtract+MOD)%MOD;
            
            return (int)ans;
            
        };
        
        auto queryRightSum = [&](int l,int r){
            if(l>r){
                return 0;
            }
            
            long long d = r - l + 1;
            long long toSubtract = (d*prefsum[l])%MOD;
            
            long long ans = (double_prefsum[r+1] - double_prefsum[l] + MOD)%MOD;
            ans = (ans-toSubtract+MOD)%MOD;
            
            return (int)ans;
        };
        
        long long ans = 0;
        
        for(int i=0;i<n;i++){
            long long curr_min = strength[i];
            int l = left[i] + 1,r = right[i] - 1;
            
            long long right_sum = queryRightSum(i+1,r);
            long long left_sum = queryLeftSum(l,i);
            
            long long curr_sum = (right_sum*(i-l+1))%MOD;
            curr_sum = (curr_sum + (left_sum*(r-i+1))%MOD)%MOD;
            
            long long curr_ans = (curr_sum*curr_min)%MOD;
            
            ans = (ans+curr_ans)%MOD;
        }
        
        return ans;        
    }
};
