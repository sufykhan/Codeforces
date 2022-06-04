// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool sortby(const pair<int,int> &a,const pair<int,int> &b)
    {
        return (a.second < b.second);
    }
  
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>>arr;
        for(int i=0;i<n;i++){
           arr.push_back({start[i],end[i]});
        }
        sort(arr.begin(),arr.end(), sortby);
        int cnt=0,endd,startt;
        for(int i=0;i<n;i++){
            if(i==0) {
                startt=arr[i].first;
                endd=arr[i].second;
                cnt=1;
                continue;
            }
            if(arr[i].first>endd){
                endd=arr[i].second;
                startt=min(startt,arr[i].first);
                cnt++;
            }
        }
        return cnt;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends