class Solution {
public:
    int dirx[4]={-1,1,0,0};
    int diry[4]={0,0,1,-1};
    bool isValid(int i,int j,vector<vector<char>>&board){
        if(i>=0 && j>=0 && i<board.size()&&j<board[0].size()){
            return true;
        }
        return false;
    }
        
     bool recur(vector<vector<char>>&board,string &word,string &comp,int i,int j){
       // cout<<comp<<" ";
        if(comp==word){
            
            return true;
        }
        if(comp.size()>=word.size()){
             return false;
        }
        
        for(int k=0;k<4;k++){
            if(isValid(i+dirx[k],j+diry[k],board)){
                char yy=board[i+dirx[k]][j+diry[k]];
               // cout<<yy<<"0";
                if(word[comp.size()]==yy){
                    
                    comp+=yy;
                    board[i+dirx[k]][j+diry[k]]='?';
                    if(recur(board,word,comp,i+dirx[k],j+diry[k])){
                        return true;
                    }
                    board[i+dirx[k]][j+diry[k]]=yy;
                    comp.pop_back();
                }
                
                 
            }
        }
        
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
       for(int i=0;i<board.size();i++){
           for(int j=0;j<board[0].size();j++){
               if(word[0]==board[i][j]){
                   string comp="";
                   comp+=board[i][j];
                   char bb=board[i][j];
                   board[i][j]='?';
                   if(recur(board,word,comp,i,j)){
                       return true;
                   }
                   board[i][j]=bb;
               }
           }
       }
       return false;
    }
};