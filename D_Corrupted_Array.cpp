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
intl t, n;
int main()
{
    FASTIO();
    cin >> t;
    rep(ii, 0, t)
    {
        cin >> n;
        vi v(n + 2);intl sumo=0;intl target1,target2=-1;
        rep(i, 0, n + 2)
        {
            cin >> v[i];
            sumo+=v[i];
        }
        sort(v.begin(),v.end());bool flag=false;
        target1=v.back();sumo-=target1;
        if(sumo-v[n]==v[n]){
           // cout<<v[n]<<"\n";
            for(intl i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<"\n";
            continue;
        }
        rep(i,0,n+1){
            if(sumo-v[i]==target1){
                flag=true;
                target2=v[i];
            }
        }
        
        if(!flag) {cout<<"-1\n";}
        else {
            intl yes=0;
            rep(i,0,n+1){
                if(v[i]!=target2){
                    cout<<v[i]<<" ";
                }
                else{
                    if(yes==0){
                        yes=1;
                    }
                    else{
                        cout<<v[i]<<" ";
                    }
                }
            }
            cout<<"\n";
        }
        //  print(v);
    }
}
