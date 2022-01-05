// #include <bits/stdc++.h>
// using namespace std;




// void solve(){
//     string s;cin>>s;int n=s.length();

// }
// int main(){
//     int n;cin>>n;
//     for(int i1=0;i1<n;i1++){
//         solve();
//     }
// }
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

#define INF INT_MAX
#define MOD 1000000007
#define all(x) x.begin(), x.end()

#define endl "\n"

void flip(char &c){
    c = (c=='0'?'1':'0');
}

vi ans;

void solve(string &S, int curr){
    int pos = 0;
    cout<<"Start with-->"<<S<<"\n";
    while(pos < S.size()){
       
        if(curr == 2){ // Step 1
            int i = find(S.begin()+pos, S.end(), '1')-S.begin();
            if(i >= S.size()) return; // all are zeros.

            flip(S[i]); ans.push_back(i);
            curr ^= 3;
             cout<<"onef-->"<<i<<"-->"<<S<<"\n";
        }

        int x = find(S.begin()+pos, S.end(), '0')-S.begin();cout<<x<<": ";
        if(x == S.size()){ // corner case.
            //cout<<x<<endl;
            flip(S[pos-1]), flip(S[pos]), flip(S[pos+1]); ans.push_back(pos-1);
               cout<<"onef-->"<<pos-1<<"-->"<<S<<"\n";
            flip(S[pos-1]); ans.push_back(pos-1);
               cout<<"onef-->"<<pos-1<<"-->"<<S<<"\n";
            pos = pos+2; continue;
        }

        // clear all 1's in S[pos..x] - Step 2
        for(int i = ((x-pos)%2?x-1:x-2); i >= pos; i -= 2){
            flip(S[i]), flip(S[i+1]), flip(S[i+2]); ans.push_back(i);
            cout<<"flip-->"<<i<<"-->"<<S<<"\n";
            if(S[i+1] == '1') flip(S[i+1]), ans.push_back(i+1),  cout<<"onef-->"<<i+1<<"-->"<<S<<"\n"; // case 2 in step 2
            else flip(S[i+2]), ans.push_back(i+2),  cout<<"onef-->"<<i+2<<"-->"<<S<<"\n"; // case 1 in step 2
             
        }
        pos = x+1;
        cout<<"pos-->"<<pos<<"-->"<<S<<"\n";
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T; cin >> T;
    while(T--){
        string S; cin >> S;
        // cerr << S << endl;

        int c = count(all(S), '1');
        if(c == 0){
            cout << "YES\n0" << endl;
            continue;
        }else if(c == S.size() and c%2 == 0){
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        ans.clear(); solve(S, 1+(c%2));
        cout << ans.size() << endl;
        cout << 1+(c%2) << endl;
        for(auto i : ans) cout << i << endl;
    }

    return 0;
}



// 11001
// 01001
// 00111
// 00011
// 00100
// 00000

// 110-->flip+zero 
// 001-->zero || flip flip zero
// 111-->3 zero
// //1st -->001+ baaki 110
// 2nd -->all 110

// (00100)0(00100)00 even-->possible odd-->one possible
// (0011100)

// 111110 1100010010011100111001011

// 1101

// // 11111-->11110-->11001-->11000-->001000-->000000
// // 111-->110-->001-->000
// 110111