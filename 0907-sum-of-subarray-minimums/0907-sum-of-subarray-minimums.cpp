class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int mod=1e9+7;
        stack<int>s;
        int n=arr.size();
        vector<int>right(n,-1);
        vector<int>left(n,-1);
        for(int i=0;i<arr.size();i++){
            while(!s.empty() && arr[i]<=arr[s.top()]){
                right[s.top()]=i;
                s.pop();
            }
            s.push(i);
        }
        
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && arr[i]<arr[s.top()]){
                left[s.top()]=i;
                s.pop();
            }
            s.push(i);
        }
        
        for(auto x:left) cout<<x<<" ";
        cout<<"\n";
        for(auto x:right) cout<<x<<" ";
        cout<<"\n";
       
        long long ans=0;
        
        for(int i=0;i<n;i++){
          if(right[i]==-1) right[i]=n;
          ans=(ans+(arr[i]*1LL*(i-left[i])*(right[i]-i))%mod)%mod;
        
            
        }
        return ans;
        
    }
    
   
};
