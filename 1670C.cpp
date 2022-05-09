
//C. Where is the Pizza?

#include <bits/stdc++.h>

using namespace std;

// bool check(vector<int>made){
//     sort(made.begin(),made.end());
//     for(int i=1;i<=made.size();i++){
//         if(i!=made[i-1]){
//             return false;
//         }
//     }
//     return true;
// }

// int recur(vector<int>&a,vector<int>&b,vector<int>&c,vector<int>&made,int i){
    

//     int ans=0;
   
//     if(made.size()==a.size()&&check(made)){
//         // for(auto x:made){
//         //     cout<<x<<" ";
//         // }
//         // cout<<"\n";
//         return 1;
//     }
//     if(made.size()==a.size()){
//         return 0;
//     }
    
//     if(c[i]==0){
      
//         int x=0,y=0;
//         if(made.size()==0||a[i]!=made.back()){
//             made.push_back(a[i]);
//             x=recur(a,b,c,made,i+1);
//             made.pop_back();
//         }
        
//         if(made.size()==0 || b[i]!=made.back()){
//             made.push_back(b[i]);
//             y=recur(a,b,c,made,i+1);
//             made.pop_back();
//         }
       
        
//         ans=x+y;
//     }
//     else{
//         made.push_back(c[i]);
//         ans=recur(a,b,c,made,i+1);
//         made.pop_back();
//     }
    
//     return ans;
    
    
// }

// const int N = 100100;
// bool used[N];
// int par[N],sz[N];
 
// int main()
// {
    
//     int t;cin>>t;
//     while(t--){
        
//         int n;cin>>n;
//         vector<int>a(n);
//         vector<int>b(n);
//         vector<int>c(n);
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         for(int i=0;i<n;i++){
//             cin>>b[i];
//         }
//         for(int i=0;i<n;i++){
//             cin>>c[i];
            
//         }  
//         //Recursive Version

//         vector<int>d;
//         cout<<recur(a,b,c,d,0)<<"\n";
    
//     }
    
// }

const int N = 100100;
int n;
int a[N], b[N], c[N];
bool used[N];
int par[N], sz[N];
 
int getPar(int v) {
	return par[v] == v ? v : (par[v] = getPar(par[v]));
}
bool unite(int v, int u) {
	v = getPar(v);
	u = getPar(u);
	if (v == u) return false;
	if (sz[v] < sz[u]) swap(v, u);
	sz[v] += sz[u];
	par[u] = v;
	return true;
}
 
void solve() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		used[i] = 0;
		par[i] = i;
		sz[i] = 1;
	}
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < n; i++)
		scanf("%d", &b[i]);
	for (int i = 0; i < n; i++) {
		scanf("%d", &c[i]);
		if (c[i] != 0) used[c[i]] = 1;
	}
	long long ans = 1,mod=1e9+7;
	for (int i = 0; i < n; i++) {
		if (c[i] != 0) continue;
		int v = a[i], u = b[i];
		if (used[v] || used[u] || v == u) continue;
		if (!unite(v, u)) ans = (ans*2)%mod;
	}
	printf("%u\n", ans);
}

 
int main()
{
	
	int t;
	scanf("%d", &t);
	while(t--) solve();
 
	return 0;
}


