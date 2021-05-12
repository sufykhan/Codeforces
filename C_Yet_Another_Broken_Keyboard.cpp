#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;cin>>n>>k;
    string s;cin>>s;map<char,int>mp;
    
    for(int i=0;i<26;i++){
        mp[char(97+i)]=0;
    }
    for(int i=0;i<k;i++){
        char x;cin>>x;
        mp[x]=1;
    }
    // for(auto xx:mp){
    //     cout<<xx.first<<" "<<xx.second<<"\n";
    // }
    string str="";
    for(int i=0;i<n;i++){
        if(mp[s[i]]==1){
            str+=s[i];
        }
    }
    int n1=str.length();
    cout<<str<<" "<<n1<<"\n";
    unordered_set<string>s1;
    for(int i=0;i<n1;i++){
        for(int j=1;j<=n1-i;j++){
            s1.insert(str.substr(i,j));
        }
    }
    cout<<s1.size()<<"\n";
    for(auto xx:s1){
        cout<<xx<<" ";
    }
}
int main()
{
        int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	set<char> st;
	for (int i = 0; i < k; ++i) {
		char c;
		cin >> c;
		st.insert(c);
	}
	
	long long ans = 0;
	for (int i = 0; i < n; ++i) {
		int j = i;
		while (j < n && st.count(s[j])) ++j;
		int len = j - i;
		ans += len * 1ll * (len + 1) / 2;
		i = j;
	}
	cout << ans << endl;
    
}




