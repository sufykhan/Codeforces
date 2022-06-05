class Solution {
public:
    vector<vector<int>>ans;
    void recur(vector<int>&nums,int idx,vector<int>&val){
        ans.push_back(val);
        for(int i=idx;i<nums.size();i++){
            if(i==idx || nums[i]!=nums[i-1]){
                val.push_back(nums[i]);
                recur(nums,i+1,val);
                val.pop_back();
            }
            
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>val;
        recur(nums,0,val);
        return ans;
    }
};