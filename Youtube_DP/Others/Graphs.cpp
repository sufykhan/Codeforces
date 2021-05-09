//https://www.geeksforgeeks.org/top-10-interview-question-depth-first-search-dfs/?ref=rp
#include <bits/stdc++.h>
using namespace std;

class Graphs{
   public:
    map<int,bool>visited;
    map<int,list<int>>adj;
    
    void addEdge(int v,int u);
    void DFS(int v);

};

void Graphs::addEdge(int u,int v){
    adj[u].push_back(v);
}

void Graphs::DFS(int v){
    visited[v]=true;
    cout<<v<<" ";
    list<int>::iterator i;
    for(i=adj[v].begin();i!=adj[v].end();i++){
        if(!visited[*i]){
            DFS(*i);
        }
    }
}
int main(){
    Graphs Sufy;
    Sufy.addEdge(0,1);
    Sufy.addEdge(0,4);
    Sufy.addEdge(1,2);
    Sufy.addEdge(1,3);
    Sufy.addEdge(4,5);
    Sufy.addEdge(5,6);
    Sufy.DFS(0);
}