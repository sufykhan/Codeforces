class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
         map<int,int>mp;
         for(auto x:tasks){
             mp[x]++;
         }
        int ans=0;
         for(auto x:mp){
             if(x.second==1){
                 return -1;
             }
             if(x.second%3==0){
                 ans+=x.second/3;
             }
             else{
                 ans=ans+1+x.second/3;
             }
         }
        return ans;
    }
};