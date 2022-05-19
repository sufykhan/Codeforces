// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
        vector<int>pref(n+1,0);
        unordered_map<int,int>first;
        unordered_map<int,int>last;
        for(int i=1;i<=n;i++){
            pref[i]=pref[i-1]+arr[i-1];
            first[pref[i]]=-1;
        }
        for(int i=0;i<=n;i++){
            if(first[pref[i]]==-1) first[pref[i]]=i;
            last[pref[i]]=i;
        }
        int maxi=0,cnt;
        for(int i=0;i<=n;i++){
            cnt=last[pref[i]]-first[pref[i]];
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends