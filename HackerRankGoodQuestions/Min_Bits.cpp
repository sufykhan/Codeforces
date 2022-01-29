//Min set bit integer between the range n and m inclusive


#undef _GLIBCXX_DEBUG                // disable run-time bound checking, etc
#pragma GCC optimize("Ofast,inline") // Ofast = O3,fast-math,allow-store-data-races,no-protect-parens

#pragma GCC target("bmi,bmi2,lzcnt,popcnt")                      // bit manipulation
#pragma GCC target("movbe")                                      // byte swap
#pragma GCC target("aes,pclmul,rdrnd")                           // encryption
#pragma GCC target("avx,avx2,f16c,fma,sse3,ssse3,sse4.1,sse4.2") // SIMD


#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

ull val(ull n){
	n|=n>>1;
	n|=n>>2;
	n|=n>>4;
	n|=n>>8;
	n|=n>>16;
	n|=n>>32;
	n|=n>>64;
	n+=1;
	return (n>>1);
}
void recur(ull n,ull m,ull& ans){
	ull lower=val(n);
	ull upper=val(m);

	if(ceil(log2(n))==floor(log2(n)) || n==m) { 
	    ans+=n;
	    return;
	}
	if(lower==upper){
		ans+=lower;
		n=n^lower;
		m=m^lower;
		recur(n,m,ans);
	}
	else{
		lower=lower*2;
		ans+=lower;
		return;
	}
	return;
}
void solve(){
	ull ans=0;
	ull n,m;cin>>n>>m;
	if(n!=m) recur(n,m,ans);
	else ans=n;
    cout<<ans<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long t;cin>>t;
	while(t--){
		solve();
	}
	
}


