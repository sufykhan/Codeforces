class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int maj;
        for(auto &x:nums){
            if(cnt==0){
                maj=x;
            }
            cnt+= maj==x?1:-1;
        }
        return maj;
    }
};