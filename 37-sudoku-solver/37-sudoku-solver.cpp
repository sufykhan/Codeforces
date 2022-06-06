class Solution {
public:
    bool isValid(vector<vector<char>>&arr,char s,int i1,int j1){
        
        for(int i=0;i<9;i++){
            if(arr[i1][i]==s || arr[i][j1]==s){
                return false;
            }
        }
        int x=i1/3;
        x=x*3;
        int y=j1/3;
        y=y*3;
        for(int i=x;i<x+3;i++){
            for(int j=y;j<y+3;j++){
                if(arr[i][j]==s){
                    return false;
                }
            }
        }
        return true;
    }
    
    
    bool recur(vector<vector<char>>&arr,int x,int y){

        if(y==9){
            return recur(arr,x+1,0);
        }
        if(x==9){
            return true;
        }
        if(arr[x][y]!='.'){
           return recur(arr,x,y+1);
        }
       
        for(int i=1;i<=9;i++){
            char val= char(i+'0');
            if(isValid(arr,val,x,y)){
                arr[x][y]=val;
                if(recur(arr,x,y+1)){
                    return true;
                }
                arr[x][y]='.';
            }
        }
        
        return false;
        
    }
    void solveSudoku(vector<vector<char>>& board) {
        
        recur(board,0,0);
        
    }
};