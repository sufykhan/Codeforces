class Solution {
public:
    int memo[34][34];
    int dp(int row,int col){
        if(memo[row][col]!=0) return memo[row][col];
        if(row==col || col==0) return memo[row][col]=1;
        else{
            return memo[row][col]=dp(row-1,col)+dp(row-1,col-1);
        }
    }
    vector<int> getRow(int rowIndex) {
        vector<int>v(rowIndex+1);
        for(int i=0;i<=rowIndex/2;i++){
           v[i]=dp(rowIndex,i);
           v[rowIndex-i]=v[i];
        }
          
      return v;
         
    }
};