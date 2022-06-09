class Solution {
public:
    string longestPalindrome(string s) {
        
        int n=s.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        int ans=1,posi,posj;
        for(int i=0;i<n;i++){
            dp[i][i]=1;
            if(i+1<n&&s[i]==s[i+1]){
                dp[i][i+1]=2;
                ans=2;
                posi=i,posj=i+1;
            }
        }
        for(int size=3;size<=n;size++){
            for(int i=0;i+size<=n ;i++){
                int j=size+i-1;
                
                if(s[i]==s[j] && dp[i+1][j-1]!=0){
                    dp[i][j]=2+dp[i+1][j-1];
                    
                }
                else{
                    dp[i][j]=0;
                }
                
                ans=max(ans,dp[i][j]);
                if(ans==dp[i][j]) posi=i,posj=j;
            }
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        // cout<<ans<<" ";
        string str="";
        if(ans==1){
            str+=s[0];
            return str;
        }
        while(posi<n && posj>=0 &&dp[posi][posj]!=0){
            str+=s[posi];
            posi++;
            posj--;
        }
        
        string str2=str;
        reverse(str2.begin(),str2.end());
        if(ans%2==1){
            str.pop_back();
        }
        str=str+str2;
        return str;
        
    }
};