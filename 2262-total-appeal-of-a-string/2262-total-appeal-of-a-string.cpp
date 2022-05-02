class Solution {
public:
    long long appealSum(string s) {
        int n=s.size();
        long long ans=0,curr=0;
        int arr[26]={0};
        
        for(int i=0;i<n;i++){
            curr+=i+1-arr[s[i]-'a'];
            arr[s[i]-'a']=i+1;
            ans+=curr;
        }
        return ans;
    }
};