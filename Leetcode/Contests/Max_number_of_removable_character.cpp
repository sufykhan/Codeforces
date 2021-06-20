#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s,string s1){
        int n=s.size();
        int m=s1.size();
        int j=0;
        for(int i=0;i<n&&j<m;i++){
            if(s[i]==s1[j]){
                j++;
            }
        }
        return (j==m);
    }
    int maximumRemovals(string s, string p, vector<int>& removable) {
      
        int L=0,R=removable.size(),ans=0;
        while(R>=L){
            int mid=(L+R)/2;
            string temp=s;
            for(int i=0;i<mid;i++){
                temp[removable[i]]='1';
            }
            if(isSubsequence(temp,p)){
                ans=mid;
                L=mid+1;
                
            }
            else{
                R=mid-1;
            }
        }
        return ans;
    }
};
int main()
{
    Solution Sufy;
    string s="abcacb";string p="ab"; vector<int>removable{3,1,0};
    int x=Sufy.maximumRemovals(s,p,removable);
    
    cout<<x<<"\n";
    return 0;
}
