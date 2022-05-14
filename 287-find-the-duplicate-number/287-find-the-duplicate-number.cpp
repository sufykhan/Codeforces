class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast=nums[0],slow=fast;
        do{
            fast=nums[fast];
            slow=nums[nums[slow]];
        }while(slow!=fast);
        
        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};