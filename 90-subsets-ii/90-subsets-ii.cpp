class Solution {
public:
    void recur(int i,vector<int>&nums,vector<int>val,vector<vector<int>>&ans){
        
        if(i>=nums.size()){
            bool flag=true;
            for(auto x:ans){
                if(x==val){
                    flag=false;
                    break;
                }
            }
           if(flag) ans.push_back(val);
            return;
        }
        val.push_back(nums[i]);
        recur(i+1,nums,val,ans);
        val.pop_back();
        recur(i+1,nums,val,ans);
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>val;
        recur(0,nums,val,ans);
        return ans;
    
    }
};