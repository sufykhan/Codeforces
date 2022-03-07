https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1#

string longestPalin (string s) {
        // code here
        int n=s.length();
        int dp[n+1][n+1];
         for(int i=1;i<=n;i++){
             for(int i1=1;i1<=n;i1++){
            dp[i][i1]=0;
            
           }
        }
        for(int i=1;i<=n;i++){
            dp[i][i]=1;
            if(i<n&&s[i-1]==s[i] ) dp[i][i+1]=1;
            else if(i<n&&s[i-1]!=s[i]) dp[i][i+1]=0;
        }
        

        
        for(int l=2;l<=n;l++){
            int i=1;
            int j=1+l;
            while(j<=n){
                if(s[i-1]==s[j-1]){
                    dp[i][j]=dp[i+1][j-1];
                }
                else{
                    dp[i][j]=0;
                }
                //dp[i][j]=l;
                i++;
                j++;
            }
        }
        
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=n;j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        
        int ans=0;string val="";
        int maxi=-1;
        for(int i=1;i<=n;i++){
            int pos=-1;
            for(int j=1;j<=n;j++){
                if(dp[i][j]==1){
                    pos=j;
                }
            }
            if(pos-i+1>maxi && pos!=-1){
                string str="";
                for(int k=i;k<=pos;k++){
                    str+=s[k-1];
                }
                val=str;
                maxi=pos-i+1;
            }
        }
        return val;
    }