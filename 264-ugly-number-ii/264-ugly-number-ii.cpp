class Solution {
public:
    int nthUglyNumber(int n) {
        
        int x=2,y=3,z=5,x1=0,y1=0,z1=0;
        vector<int>dp(n+1,0);
        dp[0]=1;
        for(int i=1;i<n;i++){
            int mini=min(x,min(y,z));
            dp[i]=mini;
            if(mini==x){
                x1+=1;
                x=2*(dp[x1]);
            }
            if(mini==y){
                y1+=1;
                y=3*(dp[y1]);
            }
            if(mini==z){
                z1+=1;
                z=5*(dp[z1]);
            }
        }
        return dp[n-1];
        
        // vector<int> arr{2,3,5,6,15,10,30};
        // vector<bool> num(1000000,false);
        // if(n==1) return 1; 
        // num[2]=num[3]=num[5] = true;
        // for(int i = 0; i<7; i++)
        // {
        //     for(int j = arr[i];j + arr[i]<=1000000; j = j*arr[i])
        //     {    
        //         num[j] = true; 
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }
        // for(int i = 0; i<=n; i++)
        // {
        //     if(num[i]) ans.push_back(i);        
        // }
        // for(int j: ans) cout<<j<<" ";
        // return 0; 
    }
};