// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:

    bool recur(int pos,vector<string>&B,string A){
        
        if(pos==A.size()){
            // cout<<"YES";
            return true;
        }
        
        for(int i=0;i<B.size();i++){
            
            string s=B[i];
            int n1=s.size();
            
            if(pos+n1>A.size()){
                continue;
            }
            
            string subs=A.substr(pos,n1);
            if(subs==s){
                // cout<<subs<<"\n";
                if(recur(pos+n1,B,A))
                    return true;
            }
            
        }
        return false;
    }
    int wordBreak(string A, vector<string> &B) {
        
        
        return recur(0,B,A);
        
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends