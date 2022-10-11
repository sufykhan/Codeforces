class Solution {
public:
    vector<int>nextGreater(vector<int>&nums){
        stack<int>s;
        vector<int>ans(nums.size(),-1);
        for(int i=0;i<nums.size();i++){
            while(!s.empty()&&nums[s.top()]<nums[i]){
                ans[s.top()]=i;
                s.pop();
            }
            s.push(i);
        }
        return ans;
        
    }
    vector<int>nextSmaller(vector<int>&nums){
        stack<int>s;
        vector<int>ans(nums.size(),-1);
        for(int i=nums.size()-1;i>=0;i--){
            while(!s.empty()&&nums[s.top()]>nums[i]){
                ans[s.top()]=i;
                s.pop();
            }
            s.push(i);
        }
        return ans;
        
    }
    bool increasingTriplet(vector<int>& nums) {
            vector<int>inc=nextGreater(nums);
            vector<int>dec=nextSmaller(nums);
            for(int i=0;i<nums.size();i++){
                if(dec[i]!=-1 && inc[i]!=-1){
                    return true;
                }
            }
            return false;
    }
};