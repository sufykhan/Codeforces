class Solution {
public:
    static bool check(string s1,string s2){
        if(s2.size()-s1.size()==1){
            int i=0,j=0,cnt=0;
            while(i<s1.size()&&j<s2.size()){
                if(s1[i]==s2[j]){
                    i++;
                    j++;
                }
                else{
                    j++;
                    cnt++;
                }
            }
            return cnt<2;
        }
        return false;
    } 
    
    int longestStrChain(vector<string>& s) {
        
        int ans=INT_MIN;
        sort(s.begin(),s.end(),[](string a,string b){return a.size()<b.size();});
        int n=s.size();
        //vector<int>dp(n,1);
        unordered_map<string,int>dp;
    
        string s1;
        for(auto &str:s){
            dp[str]=1;
            for(int i=0;i<str.size();i++){
                s1=str.substr(0,i)+str.substr(i+1);
                if(dp.find(s1)!=dp.end()){
                    dp[str]=max(dp[str],1+dp[s1]);
                }
            }
        
        }
        for(int i=0;i<n;i++){
            ans=max(ans,dp[s[i]]);
        }
        return ans;
        
    }
};