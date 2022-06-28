class Solution {
public:
    long long appealSum1(string s) {
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
    
    //O(n)
    long long appealSum(string s) {
      
        long long prev[26]={0},ans=0;
        for(int i=0;i<s.size();i++){
            ans+=(i+1-prev[s[i]-'a'])*1LL*(s.size()-i);
            prev[s[i]-'a']=i+1;
        }
        return ans;
        
    }
    
    //O(n^2)
    long long appealSum2(string nums) {
        int n=nums.size();
        long long ans=0;
        for(int k=1;k<=n;k++){
            int cnt=0;
            map<char,int>mp;
            for(int i=0;i<n;i++){
                if(i<k){
                    mp[nums[i]]++;
                    continue; 
                }
                ans+=mp.size();
                mp[nums[i-k]]--;
                if(mp[nums[i-k]]==0) mp.erase(nums[i-k]);
                mp[nums[i]]++;
            }
            ans+=mp.size();
        }
        return ans;
    }
    
};