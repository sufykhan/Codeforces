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
intl t, n,m;

void solve(){
    cin>>n>>m;
    vi v;
    intl arr[n][m];intl arr2[n][m];
    rep(i,0,n){
        rep(j,0,m){
            cin>>arr[i][j];
            arr2[i][j]=0;
            v.push_back(arr[i][j]);
        }
        
    }
    sort(v.begin(),v.end());
     intl cnt=0;
     rep(i,0,n){
         intl prevcnt=cnt;

        
        rep(j,0,m){
            rep(k,0,m){
                if(arr[i][j]==v[k]){
                    arr2[i][cnt]=arr[i][j];v[k]=0;
                    cnt++;
                    arr[i][j]=-1;
                    break;
                }
                
            }
        } 
        // if((cnt)==prevcnt){
        //     rep(j,0,m){
        //         arr2[i][j]=arr[i][j];
        //     }
        // }
        for(intl j=0;j<prevcnt;j++){
            rep(k,0,m){
                if(arr[i][k]!=-1){
                    arr2[i][j]=arr[i][k];
                    arr[i][k]=-1;
                    break;
                }
            }
        }
        for(intl j=cnt;j<m;j++){
            rep(k,0,m){
                if(arr[i][k]!=-1){
                    arr2[i][j]=arr[i][k];
                    arr[i][k]=-1;
                    break;
                }
            }
        }

        }

    rep(i,0,n){
        rep(j,0,m){
           if(arr2[i][j]<200 && arr2[i][j]>0) cout<<arr2[i][j]<<" ";
           else cout<<"? ";
        }
        cout<<"\n";
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

//432
//314
//223