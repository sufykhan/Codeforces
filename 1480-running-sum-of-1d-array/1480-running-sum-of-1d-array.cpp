class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int cnt=0;
        vector<int>ans;
        for(auto x:nums){
            cnt+=x;
            ans.push_back(cnt);
        }
        return ans;
    }
};