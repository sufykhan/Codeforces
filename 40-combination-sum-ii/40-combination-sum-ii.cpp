class Solution {
public:
    vector<vector<int>>ans;
    
    void recur(vector<int>&arr,int target,vector<int>&val,int idx){
        if(target==0){
            ans.push_back(val);
        }
        for(int i=idx;i<arr.size();i++){
            if(i==idx || arr[i]!=arr[i-1]){
                if(target-arr[i]>=0){
                    target=target-arr[i];
                    val.push_back(arr[i]);
                    recur(arr,target,val,i+1);
                    val.pop_back();
                    target=target+arr[i];
                }
            }
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        vector<int>val;
        recur(arr,target,val,0);
        return ans;
    }
};