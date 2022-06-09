class Solution {
public:
    int largestRectangleArea(vector<int>&nums) {
        vector<int>left(nums.size(),0);
        vector<int>right(nums.size(),0);
        int n=nums.size();
        stack<int>s;
        
        for(int i=0;i<nums.size();i++){
            if(s.empty()){
                s.push(i);
                continue;
            }
         
            while(!s.empty() && nums[i]<nums[s.top()]){
                right[s.top()]=i;
               
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty()){
            right[s.top()]=n;
            s.pop();
        }
        
        reverse(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            if(s.empty()){
                s.push(i);
                continue;
            }
            while(!s.empty() && nums[i]<nums[s.top()]){
                left[n-s.top()-1]=n-i-1;
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty()){
            left[n-s.top()-1]=-1;
            s.pop();
        }
         reverse(nums.begin(),nums.end());
        
        int ans=0;
        for(int i=0;i<nums.size();i++){
            
            ans=max(ans,nums[i]*(right[i]-left[i]-1));
        }
        return ans;
        
    }
};