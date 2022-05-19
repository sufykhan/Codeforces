class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n=arr.size();
        if(n<3) return {};
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            int target=-1*arr[i];
            int l=i+1,r=n-1;
            while(r>l){
                if(arr[l]+arr[r]==target){
                    ans.push_back({arr[i],arr[l],arr[r]});
                    while(r>l&&arr[l]==ans.back()[1]){
                        l++;
                    }
                    while(r>l&&arr[r]==ans.back()[2]){
                        r--;
                    }
                }
                else if (arr[l]+arr[r]>target){
                    r--;
                }
                else{
                    l++;
                }
            }
            while(i+1<n&&arr[i]==arr[i+1]){
                i++;
            }
            
        }
        return ans;
        
    }
};