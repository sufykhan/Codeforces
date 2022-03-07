// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    int di[4]={-1,0,1,0};
    int dj[4]={0,1,0,-1};
    char dr[4]={'U','R','D','L'};
    
    bool out(vector<vector<int>>m,vector<vector<bool>>vis,int n,int i,int j){
        if(i<0||i>=n||j<0||j>=n||m[i][j]==0||vis[i][j]){
            return true;
        }
        return false;
    }
    
    void helper(int i,int j,vector<vector<int>>&m,vector<vector<bool>>&vis,int n,string s,vector<string>&ans){
        if(i==n-1&&j==n-1){
            ans.push_back(s);
            return;
        }
        if(i==0&&j==0){
            vis[i][j]=true;
        }
    
        // if(out(m,vis,n,i,j)){
        //     return;
        // }
        
        for(int i1=0;i1<4;i1++){
            if(!out(m,vis,n,i+di[i1],j+dj[i1])){
                 vis[i+di[i1]][j+dj[i1]]=true;
                 helper(i+di[i1],j+dj[i1],m,vis,n,s+dr[i1],ans);
                 vis[i+di[i1]][j+dj[i1]]=false;
                 
            }
           
        }
     
        
    }
    

    
    vector<string> findPath(vector<vector<int>> &m, int n) {
      
      vector<vector<bool>>vis(n,vector<bool>(n,false));
      vector<string>ans;
      string s="";
      if(m[0][0]!=0) helper(0,0,m,vis,n,s,ans);
     
      return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends