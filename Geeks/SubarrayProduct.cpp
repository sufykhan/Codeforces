 class Solution{
 public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        if(n==0) return 0;
        map<int,int>m;
        m[arr[0]]++;
        m[0]++;
        for(int i=1;i<n;i++){
            arr[i]+=arr[i-1];
            if(++m[arr[i]]>=2) return 1;
        }
        return 0;
    }

 };