class Solution {
public:
    
    bool isCycle(int i,vector<vector<int>>&adj,vector<int>&type){
        
        if(type[i]==1){
            return true;
        }
        if(type[i]==0){
            type[i]=1;
            for(auto x:adj[i]){
                 if(isCycle(x,adj,type)){
                     return true;
                 }
            }
           
        }
        
        type[i]=2;
        return false;
    }
    bool canFinish(int nums, vector<vector<int>>& arr) {
       
        int E=arr.size();
        
        vector<vector<int>>adj(nums,vector<int>());
        for(int i=0;i<E;i++){
            adj[arr[i][0]].push_back(arr[i][1]);
        }
        vector<int>type(nums,0);
        for(int i=0;i<nums;i++){
            if(isCycle(i,adj,type)){
                    return false;
            }
        }
        return true;
    }
};