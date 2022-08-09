class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int ans=0;
        int mod=1e9+7;
        map<int,long long int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]=1;
            for(int j=0;j<i;j++){
                if(arr[i]%arr[j]==0){
                    mp[arr[i]]=(mp[arr[i]] + (mp[arr[j]]*1LL*mp[arr[i]/arr[j]])%mod)%mod;
                }
            }
            ans=(ans+mp[arr[i]])%mod;
        }
        return ans;
    }
};