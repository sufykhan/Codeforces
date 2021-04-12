#include <bits/stdc++.h>
using namespace std;
typedef long long intl;
typedef vector<intl> vi;
typedef pair<intl,intl> pi;

#define F first
#define S second
#define pb push_back
#define mp make_pair
#define rep(i,a,n) for(intl i=a;i<n;i++)


void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void print(vector<intl>v){
for(auto x:v){
cout<<x<<' ';
}
cout<<endl;
}

bool sortbySec(pair<intl,intl>&a,pair<intl,intl>&b){
    return (a.second>b.second);
}

bool isPrime(intl y){
    for(int i = 2; i*i <= y ;i++){ 
			if(y%i == 0){ 
				return false; 
			} 
		}
    return true; 
}
intl t,a,b,c;
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        cin>>a>>b>>c;
        a=a-c+1;b=b-c+1;c=pow(10,(c-1));
        intl ans1,ans2;
        intl yo1=pow(10,a-1),yo2=pow(10,b-1);
        while(true){
            yo1++;
            if(isPrime(yo1)){
                //cout<<yo1<<" ";
                ans1=(yo1);
                break;
            }
        }
        if(a==b){
            yo2=yo1+1;
        }
        while(true){
             yo2++;
            if(isPrime(yo2)){
                //cout<<yo2<<" ";
                ans2=(yo2);
                break;
            }
        }
        // print(v);
       
        cout<<ans1*c<<" "<<ans2*c<<"\n";
        // cout<<v[0]*c<<" "<<v[1]*c<<"\n";

}
}

// 6 6 2
// 2->10
// 5prim*10 5prime*10

// 2 3 1
// 2prime*1 3prime*1
// 2 2 2

// 0prime*10 0prime*10


