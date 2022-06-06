// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


bool isValid(bool arr[101][101],int n,int col,vector<int>&color,int node){
    for(int k=0;k<n;k++){
        if(k!=node && arr[node][k]==1 && color[k]==col) return false;
    }
    return true;
}
bool recur(bool arr[101][101],int m, int n,vector<int>&color,int node){
    
        if(node==n){
            return true;
        }
        for(int col=1;col<=m;col++){
            if(isValid(arr,n,col,color,node)){
                color[node]=col;
                if(recur(arr,m,n,color,node+1)){
                    return true;
                }
                color[node]=0;
            }
        }
        
        return false;
    
}

bool graphColoring(bool graph[101][101], int m, int n) {
    vector<int>color(n,0);
    return recur(graph,m,n,color,0);
    
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        cout << graphColoring(graph, m, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends