// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long countKdivPairs(int A[], int n, int k)
    {
        //code here
        long long ans=0,cnt=0;
        map<int,int>mp;
        for(int i=1;i<k;i++){
            mp[i]=0;
        }
        for(int i=0;i<n;i++){
            int x=A[i];
            if(x%k==0){
                cnt++;
            }
            else{
                int y=x%k;
                mp[y]++;
            }
            
        }
        ans+=(cnt*1LL*(cnt-1))/2;
        for(int i=1;i<k;i++){
            int j=k-i;
            if(i==j){
                ans+=(mp[i]*1LL*(mp[i]-1))/2;
            }
            else{
                ans+=mp[i]*mp[j];
                mp[i]=0;
                mp[j]=0;
            }
           
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		int k;
		cin >> k;

        Solution ob;
		cout << ob. countKdivPairs(a, n , k) << "\n";



	}


	return 0;
}
  // } Driver Code Ends