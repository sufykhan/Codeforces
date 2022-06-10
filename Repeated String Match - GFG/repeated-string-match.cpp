// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{

    public:
    int repeatedStringMatch(string A, string B) 
    {
         int a=A.size(),b=B.size();
        vector<int>lps(b);
	   lps[0]=0;
        for(int j=0,i=1;i<b;)
        {
            if(B[i]==B[j])
                lps[i++]=++j;
            else if(j!=0)
                j=lps[j-1];
            else
                lps[i++]=0;
        }
        
        for(int i=0,j=0;i<a;)
        {
            if(B[j]==A[(i+j)%a])
                ++j;
            if(j==b)
            {
                if((i+j)%a)
                    return (i+j)/a+1;
                return (i+j)/a;
            }
            else if(i<a and B[j]!=A[(i+j)%a])
            {
                if(j!=0)
                {
                    i+=(j-lps[j-1]);//updating 'i' here helps to keep pointed to the same position in 'A'
                    j=lps[j-1];
                }
                else
                    ++i;//even if no match found for the first letter of the pattern increment 'i'
            }
            
        }
        return -1;
    }
  
};

// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution obj;
        cout<<obj.repeatedStringMatch(A,B)<<"\n";
    }
    return 0;
}
  // } Driver Code Ends