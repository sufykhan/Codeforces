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


int maxD(vector<vector<int>>& graphs) {
        map<pair<double, double>, set<int> > mp;
        map<int, set<int> > xmp;
        int n=graphs.size();
        if(n==1){
            return 1;
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(graphs[j][0]-graphs[i][0]!=0){
                    double m=(graphs[j][1]-graphs[i][1])/(1.0*(graphs[j][0]-graphs[i][0]));
                    double c=(graphs[j][1]-(m*graphs[j][0]));
                    if(mp.find({m,c})!=mp.end()){
                        mp[{m,c}].insert(i);
                        mp[{m,c}].insert(j);
                    }else{
                        set<int> st;
                        st.insert(i);
                        st.insert(j);
                        mp[{m,c}]=st;
                    }
                }
                else{
                    if(xmp.find(graphs[i][0])!=xmp.end()){
                        xmp[graphs[i][0]].insert(i);
                        xmp[graphs[i][0]].insert(j);
                    }else{
                        set<int> st;
                        st.insert(i);
                        st.insert(j);
                        xmp[graphs[i][0]]=st;
                    }
                }
            }
        }
        int ans=0;
        for(auto it:mp){
            set<int> st=it.second;
            ans=max(ans, (int)st.size());
        }
        for(auto it:xmp){
            set<int> st=it.second;
            ans=max(ans, (int)st.size());
        }
        return ans;
    }

int main()
{
    FASTIO();
    int n,sej;
	cin>>n>>sej;
	
	vector<vector<int>> vec(sej,vector<int>(2,0));
	
	for(int i=0;i<sej;i++){
	    cin>>vec[i][0]>>vec[i][1];
	}
	
	cout<<maxD(vec);
	
	return 0;
}
