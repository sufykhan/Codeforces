// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int minChar(string s){
        string val=s;
        reverse(s.begin(),s.end());
        val+='$';
        val+=s;
        int n=val.size();
        vector<int>pref(n,0);
        for(int i=1;i<n;i++){
            int j=pref[i-1];
            
            while(j>0&&val[i]!=val[j]){
                j=pref[j-1];
            }
            if(val[i]==val[j]){
                j++;
            }
            pref[i]=j;
        }
        int ans=s.size()-pref[n-1];
        return ans;
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.minChar(str);
	    cout << ans<<endl;
	}
	return 0;
}
  // } Driver Code Ends