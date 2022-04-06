class Solution {
public:
    
    bool isSafe(int i,int j,vector<vector<int>>& arr,int col){
        int n=arr.size();
        int m=arr[0].size();
        if(i>=0&&i<n&&j>=0&&j<m){
            return arr[i][j]==col;
        }
        return false;
    }
    int dx[4]={1,0,-1,0};
    int dy[4]={0,1,0,-1};
    
    
    void helper(vector<vector<int>>& arr, int sr, int sc, int val,int col){
        arr[sr][sc]=val;
        for(int i=0;i<4;i++){
            if(isSafe(sr+dx[i],sc+dy[i],arr,col)){
                helper(arr,sr+dx[i],sc+dy[i],val,col);
            }
        }
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        if(image[sr][sc]!=newColor) helper(image,sr,sc,newColor,image[sr][sc]);
        return image;
    }
};