class Solution {
public:
    int row,col;
    vector<int> x = {-1,1,0,0};
    vector<int> y = {0,0,-1,1};
    
    bool valid(vector<vector<int>>& nums,int i,int j){
        if(i<0 || i==row || j<0 || j==col || nums[i][j]==0 || nums[i][j]==2) return false;
        return true;
    }
    
    void dfs(vector<vector<int>>& nums,int i,int j){
	// set value=2 and call dfs to its valid neighbours
        nums[i][j]=2;
        for(int z=0;z<4;z++){
            int a=i+x[z],b=j+y[z];
            if(valid(nums,a,b)){
                dfs(nums,a,b);
            }
        }
    }
    
    void boundary(vector<vector<int>>& nums){
	//traverse all the 4 boundaries and call dfs on the cells with value 1
        for(int i=0;i<col;i++) if(nums[0][i]==1) dfs(nums,0,i);
        for(int i=0;i<col;i++) if(nums.back()[i]==1) dfs(nums,row-1,i);
        for(int i=0;i<row;i++) if(nums[i][0]==1) dfs(nums,i,0);
        for(int i=0;i<row;i++) if(nums[i].back()==1) dfs(nums,i,col-1);
    }
    
    int numEnclaves(vector<vector<int>>& nums){
        int count=0;
        row=nums.size(); col=nums[0].size();
		//step1 traverse the boundary
        boundary(nums);
		//step2 count number of 1 and restore the input
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(nums[i][j]==1) count++;
                if(nums[i][j]==2) nums[i][j]=1;
            }
        }
        return count;
    }
};