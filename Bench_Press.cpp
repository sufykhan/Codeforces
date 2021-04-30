#include <bits/stdc++.h>
using namespace std;
typedef long long intl;
typedef vector<intl> vi;
typedef pair<intl, intl> pi;

#define F first
#define S second
#define pb push_back
#define mp make_pair
#define rep(i, a, n) for (intl i = a; i < n; i++)

void FASTIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

bool isPrime(intl n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (intl i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

void print(vector<intl> v)
{
    for (auto x : v)
    {
        cout << x << ' ';
    }
    cout << endl;
}

bool sortbySec(pair<intl, intl> &a, pair<intl, intl> &b)
{
    return (a.second > b.second);
}
intl t, N,Wr,W;

void solve(){
    cin>>N>>W>>Wr;vi w(N);
    map<intl,intl>mp;
    rep(i,0,N){
      cin>>w[i];
      mp[w[i]]++;
    }
    intl yes=0;
    for(auto&xx:mp){
        if(xx.S>1){
            yes+=2*(xx.S/2)*xx.F;
        }
    }
    // intl yes=0;
    // sort(w.begin(),w.end(),greater<intl>());
    // vector<bool>visited(N,false);
    // rep(i,0,N){
    //     if(visited[i]==true){continue;}
    //     intl target=w[i],sum=0;bool flag=false;
    //     rep(j,i+1,N){
    //         if(w[j]!=0) {
    //             sum+=w[j];
    //             visited[j]=true;
    //         }
    //         if(sum>target){
    //             sum-=w[j];
    //             visited[j]=false;
    //         }
    //         else if(sum==target){
    //               yes+=2*target;
    //               cout<<yes<<"\n";
    //               visited[i]=true;
                  
    //         }
            
    //     }
    //     if(flag==true){
    //         rep(x,0,N){
    //             if(visited[x]==true){
    //                w[x]=0;
    //             }
    //         }
    //     }
    // }

    intl sev=yes+Wr;
    if(sev>=W){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    
}
int main()
{
    FASTIO();
    cin >> t;
    rep(ii, 0, t)
    {
        solve();
    }
}
