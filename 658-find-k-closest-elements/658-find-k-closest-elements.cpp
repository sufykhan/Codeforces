class Solution {
public:
    vector<int>getK(vector<int>arr,int k,int i,int type){
        vector<int>ans;
        while(k--){
            ans.push_back(arr[i]);
            i+=type;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans;
        int n=arr.size();
        auto it=lower_bound(arr.begin(),arr.end(),x);
        if(it==arr.end()){
            return getK(arr,k,n-1,-1);
        }
        if(it==arr.begin() && *it!=x){
            return getK(arr,k,0,1);
        }
        int i,j;
        int comp=it-arr.begin();
        if(*it==x){   
            i=comp-1;
            j=comp+1;
            ans.push_back(x);
            k--;
        }
        else{
            i=comp-1;
            j=comp;
        }
          
        while(k>0 && i>=0 && j<n){
        
            if(abs(arr[i]-x)>abs(arr[j]-x)){
                ans.push_back(arr[j]);
                j++;
            }
            else if(abs(arr[i]-x)==abs(arr[j]-x)){
                if(arr[i]>arr[j]){
                    ans.push_back(arr[j]);
                    j++;
                }
                else{
                    ans.push_back(arr[i]);
                    i--;
                }
            }
            else{
               ans.push_back(arr[i]);
               i--; 
            }
            k--;
        }
        while(k>0 && i>=0){
            ans.push_back(arr[i]);
            i--;
            k--;
        }
        while(k>0 && j<n){
            ans.push_back(arr[j]);
            j++;
            k--;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};