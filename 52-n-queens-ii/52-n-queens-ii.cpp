class Solution {
public:
     vector<vector<string>>ans;
    
    bool isSafe(int i,int j,vector<vector<int>>&matrix){
        int n=matrix.size();
        if(i>=0 && j>=0 && i<n && j<n ){
            
            for(int i1=0;i1<n;i1++){
                if(matrix[i][i1]==1 || matrix[i1][j]==1){
                    return false;
                }
            }
            int x=i,y=j;
            while(x>=0 && y>=0){
                if(matrix[x][y]==1){
                    return false;
                }
                x--,y--;
            }
            x=i,y=j;
            while(x<n && y<n){
                if(matrix[x][y]==1){
                    return false;
                }
                x++,y++;
            }
            x=i,y=j;
            while(x>=0 && y<n){
                if(matrix[x][y]==1){
                    return false;
                }
                x--,y++;
            }
            x=i,y=j;
            while(x<n && y>=0){
                if(matrix[x][y]==1){
                    return false;
                }
                x++,y--;
            }
            return true;
        }
        else{
            return false;
        }
    }
    vector<string> compile(vector<vector<int>>&matrix){
        
        int n=matrix.size();
        vector<string>v(n);
        for(int i=0;i<n;i++){
            string ans1="";
            for(int j=0;j<n;j++){
                if(matrix[i][j]==1) ans1+='Q';
                else ans1+='.';
            }
            v[i]=ans1;
        }
        return v;
    }
    void recur(vector<vector<int>>matrix,int i, int j){
        if(matrix.size()==1){
            matrix[0][0]=1;
            ans.push_back(compile(matrix));
            return;
        }
        if(j==matrix.size()){
            return;
        }
        if(i==matrix.size()){
            ans.push_back(compile(matrix));
            return;
        }
        if(isSafe(i,j,matrix)){
            matrix[i][j]=1;
            for(int jx=0;jx<matrix.size();jx++){
                if(j!=jx && jx!=j+1 && jx!=j-1) recur(matrix,i+1,jx);
            }
            matrix[i][j]=0;
        }
        
    }
    
    int totalNQueens(int n) {
        vector<vector<int>>matrix(n,vector<int>(n,0));
        
        for(int j=0;j<n;j++){
            recur(matrix,0,j);
        }
        
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        
        return ans.size();
    }
};

