#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > adj(100005);

vector<int> setNum(100005);
void addEdge(int a1, int a2)
{
    adj[a1].push_back(a2);
    adj[a2].push_back(a1);
}
 
void toBipartite(int N)
{
    setNum.assign(N, -1);
 
    queue<int> q;
 
    q.push(0);
    setNum[0] = 0;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int u : adj[v]) {
            if (setNum[u] == -1) {
                setNum[u] = setNum[v] ^ 1;
                q.push(u);
            }
        }
    }
}
 
void pathLengthQuery(int A, int B)
{
    if (setNum[A] == setNum[B]) {
        cout << "YES" <<"\n";
    }
    else {
        cout << "NO" <<"\n";
    }
}
 
int main()
{

    int n,q;cin>>n>>q;
    for(int i=0;i<n-1;i++){
        int v,u;cin>>v>>u;
         addEdge(v-1,u-1);
    }
    toBipartite(n);

    for(int i=0;i<q;i++){
        int a,b;cin>>a>>b;
        pathLengthQuery(a-1,b-1);
    }
   
 
    return 0;
}