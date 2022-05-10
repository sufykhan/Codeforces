class Solution {
public:
    
    vector<vector<int>>ans;
    
    void recur(int idx,int n,int target,vector<int>&val,vector<int>&arr){
        
        if(target==0 && val.size()==n){
            ans.push_back(val);
            return;
        }
        if(val.size()==n || target<0){
            return ;
        }
        
        for(int i=idx;i<arr.size();i++){
            
            val.push_back(arr[i]);
            target-=arr[i];
            recur(i+1,n,target,val,arr);
            target+=arr[i];
            val.pop_back();
            
        }
        
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<int>val;
        int i=0;
        vector<int>arr={1,2,3,4,5,6,7,8,9};
        recur(i,k,n,val,arr);
        return ans;
        
    }
};