class Solution {
public:
  
        
    int minDeletions(string s) {
        map<int,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]-'a']++;
        }
        vector<int>arr;
        for(auto &x:mp){
            arr.push_back(x.second);
        }
        sort(arr.begin(),arr.end(),greater<int>());
        int ans=0;
        int maxi=s.size();
        for(int i=0;i<arr.size();i++){
            if(arr[i]>maxi){
               ans+=arr[i]-maxi;
               arr[i]=maxi;
            }
            maxi=max(0,arr[i]-1);
        }
        return ans;
    }
};