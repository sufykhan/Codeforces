class KthLargest {
public:
    int k;
    priority_queue<int,vector<int>,greater<int>>q1;
    KthLargest(int kth, vector<int>& nums) {
        k=kth;
        for(int i=0;i<nums.size();i++){
            q1.push(nums[i]);
            if(q1.size()>k){
                q1.pop();
            }
        }
    }
    
    int add(int nums) {
        q1.push(nums);
        if(q1.size()>k){
            q1.pop();
        }
        return q1.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */