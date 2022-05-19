class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target1) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        if(n<4) return {};
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            
                int target=target1-(arr[i]+arr[j]);
        
                int l=j+1,r=n-1;
                while(r>l){
                    
                    if(arr[l]+arr[r]==target){
                        ans.push_back({arr[i],arr[j],arr[l],arr[r]});
                        while(r>l&&arr[l]==ans.back()[2]){
                            l++;
                        }
                        while(r>l&&arr[r]==ans.back()[3]){
                            r--;
                        }
                    
                    }
                    else if(arr[l]+arr[r]<target){
                        l++;
                    }
                    else{
                       r--;
                    }
                    
                    
                }
                
                while(j+1<n&&arr[j+1]==arr[j]){
                    j++;
                }
            }
            while(i+1<n&&arr[i+1]==arr[i]){
                    i++;
            }
        }
        return ans;
    }
};