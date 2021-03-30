#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
typedef long long intl;
intl t,n,ans;

 intl getSum(intl n)
    {
        intl sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }
intl gcd(intl a, intl b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

int main(){
  cin>>t;
  rep(ii,0,t){
      cin>>n;
  
  while(true){
      if(gcd(n,getSum(n))>1){
          cout<<n<<"\n";
          break;
      }
      n++;
  }
  }
}