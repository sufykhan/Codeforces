class Solution {
public:
    vector<vector<int>>ans;
    void recur2(vector<int>&arr,int target,int i,vector<int>&val){
        
        if(target==0){
            ans.push_back(val);
            return;
        }
        if(target<0){
            return;
        }
        if(i>=arr.size()){
            return;
        }
        
        recur(arr,target,i+1,val);
        val.push_back(arr[i]);
        recur(arr,target-arr[i],i+1,val);
        val.pop_back();
        
    }
     void recur(vector<int>&arr,int target,int idx,vector<int>&val){
        
         if(target<0){
             return;
         }
         if(target==0){
             ans.push_back(val);
             return;
         }
        
        for(int i=idx;i<arr.size();i++){
            
            if(target>=arr[i] && (i==idx || arr[i]!=arr[i-1])){
                val.push_back(arr[i]);
                target-=arr[i];
                recur(arr,target,i+1,val);
                target+=arr[i];
                val.pop_back();
            }
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<int>val;
        sort(candidates.begin(),candidates.end());
        recur(candidates,target,0,val);
        return ans;
    }
};