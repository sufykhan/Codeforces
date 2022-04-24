class Solution {
public:
    vector<int> check(string s,int pivot){
        int dans=0;
        vector<int>ans(3,0);
        for(int k=1;k<=2;k++){
            int d1=k;
            if(k==2 && (pivot+1>=s.size() || s[pivot]!=s[pivot+1])){
                break;
            }
            int i=pivot-1,j=pivot+k;
            while(i>=0 && j<s.size()&&s[i]==s[j]){
               
                    d1+=2;
                    i--;
                    j++;
                
               
            }
            if(d1>dans){
                
                dans=d1;
                ans[0]=dans;
                ans[1]=i+1;
                ans[2]=j-1;
            }
        }
        return ans;
        
    }
    
    string longestPalindrome(string s) {
        int ans=0,i=0,j=0;
        
//         vector<int>val=check(s,0);
//         cout<<val[0]<<" "<<val[1]<<" "<<val[2];
        
      //  return "";
        for(int i1=0;i1<s.size();i1++){
            cout<<i1<<" ";
            vector<int>val=check(s,i1);
            if(val[0]>ans){
                ans=val[0];
                i=val[1];
                j=val[2];
            }
            
        }
        cout<<ans<<" ";
        string str="";
        for(int k=i;k<=j;k++){
            str+=s[k];
        }
        return str;
    }
};