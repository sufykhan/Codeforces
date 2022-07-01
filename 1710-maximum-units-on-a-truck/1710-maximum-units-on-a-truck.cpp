class Solution {
public:
    int maximumUnits(vector<vector<int>>&arr, int k) {
        
        sort(arr.begin(),arr.end(),[](const vector<int>&a,const vector<int>&b){return a[1]>b[1];});
        int ans=0,i=0;
        while(k && i<arr.size())
        {
            if(arr[i][0]>0) ans+=arr[i][1],arr[i][0]--,k--;
            else i++;
        }
        return ans;
    }
};