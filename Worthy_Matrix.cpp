#include <bits/stdc++.h>
using namespace std;
typedef long long intl;

#define rep(i,a,n) for(intl i=a;i<n;i++)



// 0 0 0 0  0  0  0  0 
// 0 3 3 4  0  3  6  10
// 0 2 2 3  0  5  10 17
// 0 3 4 5  0  8  17 29
// 0 4 5 5  0  12 26 43

intl t,row,col,k;
int main(){
    cin>>t;
    rep(ii,0,t){
        intl ans=0;
        cin>>row>>col>>k;
        double arr[row+1][col+1];
        rep(i,0,row+1){
            rep(j,0,col+1){
                if(i==0||j==0) {arr[i][j]=0;}
                else {cin>>arr[i][j];}
            }
        }
        rep(i,0,row+1){
            double p=0;
            rep(j,0,col+1){
                arr[i][j]+=p;
                p=arr[i][j];
            }
        }
        rep(i,0,col+1){
            double p=0;
            rep(j,0,row+1){
                arr[j][i]+=p;
                p=arr[j][i];
            }
        }
        
        intl minrc=min(row,col);
        rep(ii,1,minrc+1){
             rep(i,ii,row+1){
             rep(j,ii,col+1){
                
                if((arr[i][j]+arr[i-ii][j-ii]-arr[i][j-ii]-arr[i-ii][j])/(ii*ii)>=k){
                    ans++;
                }
            }
        }
        }
        cout<<ans<<"\n";
        
}
}
