#include <bits/stdc++.h>
using namespace std;

typedef long long intl;
// Driver code

intl no_of_inc(intl mid,vector<intl>v,intl sum,intl n){
    intl cntMean= mid*1LL*n-sum;
    if(cntMean<0) return -1;

    intl cntMedian=0;
    intl start=(n)/2;
    if(n%2==0) start--;
    for(intl i=start;i<n;i++){
        cntMedian+=max(mid-v[i],0LL);
    }
    if(cntMean<cntMedian) return -1;
    return cntMean;
}
int main()
{
    intl t;cin>>t;
    while(t--){

        intl n;cin>>n;
        vector<intl> a(n);
        intl sum=0;
        for(int i=0;i<n;i++) cin>>a[i],sum+=a[i];
        //vector<int> a = { 6, 5, 8 };
	    sort(a.begin(),a.end());
        intl medI=n/2;
        if(n%2==0) medI--;
        intl l=a[medI],r=1e9+10,ans=-1;
        
        while(r>=l){
            intl mid=l+(r-l)/2;
            intl check=no_of_inc(mid,a,sum,n);
            if(check!=-1){
                ans=check;r=mid-1;
            }
            else{
                l=mid+1;
            }
        } 
        cout<<ans<<"\n";
	    
    }
	
}
