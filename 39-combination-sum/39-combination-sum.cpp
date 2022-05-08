class Solution {
public:
    vector<vector<int>>ans;
    void recur(int i,vector<int>&arr,int target,vector<int>&val){
        
        if(target<0 || i>=arr.size()){
            return;
        }
        if(target==0){
            ans.push_back(val);
            return;
        }
        
        val.push_back(arr[i]);
        recur(i,arr,target-arr[i],val);
        val.pop_back();
        recur(i+1,arr,target,val);
        
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int>val;
        recur(0,arr,target,val);
        return ans;
    }
};