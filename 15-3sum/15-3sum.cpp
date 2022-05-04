class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        
        map<int,int>mp;
        
        for(auto x:arr){
            mp[x]++;
        }
        
        sort(arr.begin(),arr.end());
        vector<int>::iterator ip;
        ip = unique(arr.begin(), arr.end());
        arr.resize(distance(arr.begin(), ip));
      
        for(auto x:arr){
            cout<<x<<" ";
        }
        cout<<"\n";
        int n=arr.size();
        
        vector<vector<int>>ans;
        
        for(int i=0;i<n;i++){
           
            
            int target=-1*arr[i];
             cout<<target<<" \n";
            
            int j=i+1,k=n-1;
            while(k>j){
                if(arr[j]+arr[k]==target){
                    ans.push_back({arr[j],arr[k],arr[i]});
                    j++;
                    k--;
                }
                else if (arr[j]+arr[k]<target){
                    j++;
                }
                else{
                    k--;
                }
            }
            
            j=0;
            while(j<n){
                if(i!=j && 2*arr[j]==target && mp[arr[j]]>=2){
                     ans.push_back({arr[j],arr[j],arr[i]});
                }
                j++;
                
            }
        }
        if(mp[0]>=3){
            ans.push_back({0,0,0});
        }
        
        return ans;
    }
};