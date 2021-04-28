// #include <bits/stdc++.h>
// using namespace std;
// typedef long long intl;
// typedef vector<intl> vi;
// typedef pair<intl, intl> pi;

// #define F first
// #define S second
// #define pb push_back
// #define mp make_pair
// #define rep(i, a, n) for (intl i = a; i < n; i++)

// void FASTIO()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// }

// bool isPrime(intl n)
// {
//     if (n <= 1)
//         return false;
//     if (n <= 3)
//         return true;

//     if (n % 2 == 0 || n % 3 == 0)
//         return false;

//     for (intl i = 5; i * i <= n; i = i + 6)
//         if (n % i == 0 || n % (i + 2) == 0)
//             return false;

//     return true;
// }

// void print(vector<intl> v)
// {
//     for (auto x : v)
//     {
//         cout << x << ' ';
//     }
//     cout << endl;
// }

// bool sortbySec(pair<intl, intl> &a, pair<intl, intl> &b)
// {
//     return (a.second > b.second);
// }
// intl t, r,c;

// void solve(){
//     cin>>r>>c;intl arr[r][c];
//     memset(arr,0,sizeof(arr));
//     rep(i,0,r){
//      arr[i][0]=3;
//      arr[i][c-1]=3;
//     }
//     rep(i,0,c){
//      arr[0][i]=3;
//      arr[r-1][i]=3;
//     }
//      arr[0][0]=2;
//     arr[0][c-1]=2;
//     arr[r-1][0]=2;
//     arr[r-1][c-1]=2;
//     rep(i,0,r){
//         rep(j,0,c){
//             if(arr[i][j]==0) arr[i][j]=4;   
//         }
//     }
//     bool flag=true;
//     rep(i,0,r){
//         rep(j,0,c){
//             intl x;cin>>x;
//             if(x>arr[i][j]){
//                 flag=false;
//             }
//         }
        
//     }
//     if(flag){
//     cout<<"Yes\n";
//     rep(i,0,r){
//         rep(j,0,c){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
//     }else{
//         cout<<"No\n";
//     }
    
// }
// int main()
// {
//     FASTIO();
//     cin >> t;
//     rep(ii, 0, t)
//     {
//         solve();
//     }
// }
