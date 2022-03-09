// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool isSafe(int x,int y,int n,vector<vector<int>>&vis){
    
        for(int i=0;i<n;i++){
            if(vis[i][y]){
                return false;
            }
        }
        int dy[2]={-1,1};
        int dx[2]={-1,-1};
        for(int i=0;i<2;i++){
            int x1=x,y1=y;
            while(x1>=0&&y1>=0&&x1<n&&y1<n){
                if(vis[x1][y1]){
                    return false;
                }
                x1+=dx[i];
                y1+=dy[i];
            }
        }
        return true;
       
    }
    
    void helper(vector<vector<int>>&board,int row,int col,int n,vector<int>&ans,vector<vector<int>>&final){
      
       if(row==n){
           final.push_back(ans);
           return;
       }
      
       for(int i=0;i<n;i++){
             
            if(isSafe(row,i,n,board)){
                ans.push_back(i+1);
                board[row][i]=1;
                helper(board,row+1,i,n,ans,final);
                board[row][i]=0;
                ans.pop_back();
            }
          
       }
        
    }
    
    vector<vector<int>> nQueen(int n) {
        vector<vector<int>>final;
        vector<vector<int>>board(n,vector<int>(n,0));
        vector<int>ans;
        
        helper(board,0,0,n,ans,final);
        
        return final;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends