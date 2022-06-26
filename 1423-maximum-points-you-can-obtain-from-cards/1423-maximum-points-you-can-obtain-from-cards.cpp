class Solution {
public:
    int maxScore(vector<int>&arr, int k) {
        
        k=arr.size()-k;
        long long int sum=0,mini=INT_MAX,tot=0;
        for(int i=1;i<=arr.size();i++){
            tot+=arr[i-1];
            if(i<=k){
                sum+=arr[i-1];
            }
            else{
                cout<<sum<<" ";
                mini=min(mini,sum);
                sum=sum-arr[i-k-1];
                sum+=arr[i-1];
            }
        }
        mini=min(mini,sum);
        tot=tot-mini;
        return tot;
        
    }
};