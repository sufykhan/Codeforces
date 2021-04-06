// #include <bits/stdc++.h>
// using namespace std;
// typedef long long intl;
// typedef vector<intl> vi;
// typedef pair<intl,intl> pi;

// #define F first
// #define S second
// #define pb push_back
// #define mp make_pair
// #define rep(i,a,n) for(intl i=a;i<n;i++)


// void FASTIO(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// }

//  void print(vector<intl>v){
// for(auto x:v){
// cout<<x<<' ';
// }
// cout<<endl;
// }

// bool sortbySec(pair<intl,intl>&a,pair<intl,intl>&b){
//     return (a.second>b.second);
// }
// intl t,n;

// intl dp[101]={0};
// intl v[101];

// void createTree(intl se,intl en,intl depth){
  
//   cout<<se<<"  "<<en<<"  "<<depth<<endl;
//    if(se>en){
//        return;
//    }
//    if(se==en){
//        dp[se]=depth;
//        return;
//    }
// //    intl maxi=0,maxindex;
// //    rep(i,se+1,en+1){
// //        if(v[i]>maxi){
// //            maxi=v[i];
// //            maxindex=i;
// //        }
// //    }
//   int m = se;
//   for (int i = se + 1; i <= en; i++) {
//     if (v[m] < v[i]) {
//       m = i;
//     }
//   }
//    dp[m]=depth;
//    cout<<dp[m]<<"\n";
//     createTree(1LL*0,m-1,depth+1);
// createTree(m+1,n-1,depth+1);
   
// }
// int main(){
//     FASTIO();
//     cin>>t;
//     rep(ii,0,t){
//         cin>>n;
//         rep(i,0,n){
//             cin>>v[i];
            
//         }
//         intl a=0;
//         createTree(a,n-1,a);
//         // rep(i,0,n){
//         //     cout<<dp[v[i]]<<" ";
//         // }
//         // cout<<"\n";
// }
// }
#include <bits/stdc++.h>

using namespace std;

void build(int l, int r, vector<int> const &a, vector<int> &d, int curD = 0) {
  if (r < l) {
    return;
  }
  if (l == r) {
    d[l] = curD;
    return;
  }
  int m = l;
  for (int i = l + 1; i <= r; i++) {
    if (a[m] < a[i]) {
      m = i;
    }
  }
  d[m] = curD;
  build(l, m - 1, a, d, curD + 1);
  build(m + 1, r, a, d, curD + 1);
}

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int &x : a) {
    cin >> x;
  }
  vector<int> d(n);
  build(0, n - 1, a, d);
  for (int x :d) {
    cout << x << " ";
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}