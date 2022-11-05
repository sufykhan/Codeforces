class Trie{
public:
    string word;
    bool vis=false;
    Trie* child[26]={NULL};
};

class Solution {
public:
Solution(){
        root=new Trie;
}
Trie* root=NULL;
void insert(string &s){
    Trie* temp=root;
    for(auto &i:s){
        int k=i-'a';
        if(temp->child[k]==NULL){
            temp->child[k]=new Trie;
        }
        temp=temp->child[k];
    }
    temp->word=s;
    temp->vis=true;
}
    
void dfs(vector<vector<char>>& board,vector<string>&ans,Trie* temp,int i,int j){
       
        if(i>=board.size() || j>=board[0].size() ||i<0 || j<0 ||board[i][j]=='*' || !(temp->child[board[i][j]-'a'])){
            return ;
        }
        
        temp=temp->child[board[i][j]-'a'];
        if(temp->vis){
            ans.push_back(temp->word);
            temp->vis=false;
        }
        char ch=board[i][j];
        board[i][j]='*';
        dfs(board, ans, temp, i+1, j);
        dfs(board, ans, temp, i, j+1);
        dfs(board, ans, temp, i-1, j);
        dfs(board, ans, temp, i, j-1);
        board[i][j]=ch;
    
        return;
    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        for(auto &s:words)
            insert(s);
        vector<string>res;
        Trie* temp=root;
        
        for(int i=0;i<board.size();i++)
            for(int j=0;j<board[0].size();j++)
                dfs(board, res, temp, i, j);
        
        return res;
    }
};