// #include<bits/stdc++.h> 
// using namespace std;
// typedef long long ll;
// typedef unsigned long long ull;
// #define endl '\n';
 
// long long check(long long p,int n,vector<ll>&h)
// {
// 	if (p==1)
// 	{
// 		return p;
// 	}
// 	if(p<=n){
// 		if (h[p]!= -1)
// 		{
// 			p/=2;
// 			return check(p,n,h);
// 		}
// 		else
// 		{
// 			h[p]=p;
// 			return p;
// 		}
		
		
// 	}
// 	else
// 	{
// 		p/=2;
// 		return check(p,n,h);
// 	}
// }

// int main()
// {
//      int t;
//      cin>>t;
//      while (t--)
//      {
// 		int n;
// 		cin>>n;
// 		vector<ll>v(n);
// 		vector<ll>h(n+1,-1);
//         for (int i = 0; i < n; i++)
// 		{
// 			cin>>v[i];
// 		}
// 		for (int i = 0; i < n; i++)
// 		{
// 			v[i]=check(v[i],n,h);
// 		}
// 		sort(v.begin(),v.end());
// 		int k=1;
// 		int f=1;
// 		for (int i = 0; i < n; i++)
// 		{
// 			if (v[i]!=k)
// 			{
// 				cout<<"No"<<endl;
// 					f=0;
// 				break;
			
// 			}
// 			k++;
// 		}
// 		if (f)
// 		{
// 			cout<<"Yes"<<endl;
// 		}
		
//      }

// }

#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    set<int>s;
    for(int i=0;i<n;i++)
    {
        while(v[i]>0 ){
        if(v[i]<=n && s.find(v[i])==s.end()) {s.insert(v[i]);break;}
        v[i]=v[i]>>1; 
        }
        
    }
    int k=0;
    for(auto x:s){
        //cout<<x<<" ";
        k++;
        if(x!=k)
        {
            cout<<"NO\n";
            return;
        }

    }
    if(k!=n) cout<<"NO\n";
    else cout<<"YES\n";
}
    
int main()
{
    
    int t;cin >> t;
    while(t--)
    {
        solve();
    }
}
