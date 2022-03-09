#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
{
    // Code here
    int kx=KnightPos[0];
    int ky=KnightPos[1];
    int tx=TargetPos[0];
    int ty=TargetPos[1];
    
    int dx[8] ={1,-1,-2,2,-1,1,-2,2};
    int dy[8] ={2,2,1,1,-2,-2,-1,-1};
    
    if(kx==tx && ky==ty) return 0;
    
    int res[N+1][N+1];
    for(int i=0;i<N;i++)
      for(int j=0;j<N;j++)
        res[i][j]=0;
        
    queue<pair<int,int>>q;
    q.push({kx-1,ky-1});
    
    while(!q.empty())
    {
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0;i<8;i++)
        {
            if(x+dx[i]>=0 && x+dx[i]<N && y+dy[i]>=0 && y+dy[i]<N &&
               res[x+dx[i]][y+dy[i]]==0)
            {
                res[x+dx[i]][y+dy[i]]=res[x][y]+1;
                if(res[tx-1][ty-1])
                  return res[tx-1][ty-1];
                q.push({x+dx[i],y+dy[i]});
            }
        }
    }
}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends