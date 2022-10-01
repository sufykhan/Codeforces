
class Solution {
public:
    
    int numDecodings(string s) {
            int ans=0;
            
            vector<int>dp(s.size()+1,-1);
        
            dp[0]=1;  //No. of way to decode empty string
            
            if(s[0]=='0') dp[1]=0;   //Not a valid case
            else dp[1]=1;
            
            for(int i=2;i<=s.size();i++){
                
                if(s[i-1]=='0') dp[i]=0;            //To handle the case that starts with '0'
                else dp[i]=dp[i-1];                  
                
                string b=s.substr(i-2,2);           // Gets value of last 2 digit ending at i;
                
                if(stoi(b)>0 && stoi(b)<=26 && s[i-2]!='0'){
                    dp[i]+=dp[i-2];                 //As we are checking pair wise 
                }
                
                
            }
          
        
            return dp[s.size()];
    }
};
