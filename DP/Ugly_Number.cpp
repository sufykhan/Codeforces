#include <bits/stdc++.h>
using namespace std;


int getUgly(int n){
    int m2=2,i2=0,m3=3,i3=0,m5=5,i5=0,ans=1;
    vector<int>v(n);
    v[0]=1;
    for(int i=1;i<n;i++){
        ans=min(m2,min(m3,m5));
        v[i]=ans;
        if(ans==m2){
            i2+=1;
            m2=v[i2]*2;
        }
        if(ans==m3){
            i3+=1;
            m3=v[i3]*3;
        }
        if(ans==m5){
            i5+=1;
            m5=v[i5]*5;
        }
    }
    return ans;
    
}
int main()
{
    int n=150;
    cout<<getUgly(n);
    return 0;
}
