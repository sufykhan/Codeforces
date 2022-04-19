class Solution {
public:
    
    int recur(int i,string s,vector<int>&v){
        if(s[i]=='0'){
            return 0;
        }
        if(i>=s.size()-1){
            return 1;
        }
      
        if(v[i]!=-1){
            return v[i];
        }
        string b=s.substr(i,2);
        int way1=recur(i+1,s,v);
        int way2=0;
        if(stoi(b)>0 && stoi(b)<=26){
            way2=recur(i+2,s,v);
        }
        return v[i]=way1+way2;
        
    }
    int numDecodings(string s) {
            int ans=0;
            vector<int>dp(s.size()+1,-1);
            // ans=recur(0,s,dp);

            dp[0]=1;
            if(s[0]=='0') dp[1]=0;
            else dp[1]=1;
            
            for(int i=2;i<s.size()+1;i++){
                
                if(s[i-1]=='0') dp[i]=0;
                else dp[i]=dp[i-1];
                string b=s.substr(i-2,2);
                if(stoi(b)>0 && stoi(b)<=26 && s[i-2]!='0'){
                    dp[i]+=dp[i-2];
                }
                
                
            }
          
        
            return dp[s.size()];
    }
};