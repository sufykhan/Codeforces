class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        
        int i=0,j=0,n=arr.size();
        int sum = 0;
        int ans = INT_MAX;
        while(j < n){
            if(sum < target){
                sum += arr[j];
            }
            if(sum >= target){
                while(i <= j && sum >= target){
                    sum -= arr[i];
                    ans = min(ans,j-i+1);
                    i++;
                }
            }
            j++;
        }
        return ans == INT_MAX ? 0 : ans;
        
        
    }
    
};