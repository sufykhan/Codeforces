class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        if(n<3) return {};
        if(arr[0]>0) return {};
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                break;
            }
            if(i>0 && arr[i]==arr[i-1]){
                continue;
            }
            int target=-1*arr[i];
            //cout<<i<<"<--> "<<target<<"--->";
            int l=i+1,r=n-1;
            while(r>l){
               // cout<<arr[l]+arr[r]<<" \n";
                if(arr[l]+arr[r]==target){
                    ans.push_back({arr[i],arr[l],arr[r]});
                    int x=arr[l];
                    int y=arr[r];
                    while(r>l && arr[l]==x){
                        l++;
                    }
                    while(r>l && arr[r]==y){
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
            
        }
        return ans;
        
    }
};