class Solution {
public:
    string merge(string s1,string s2){
        int n=min(s1.size(),s2.size());
        string ans="";
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i]){
                ans+=s1[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
    string recur(vector<string>&strs,int l,int h){
        if(l==h){
            return strs[l];
        }
        int mid=l+(h-l)/2;
        string s1=recur(strs,l,mid);
        string s2=recur(strs,mid+1,h);
        string common=merge(s1,s2);
        return common;
        
    }
    string longestCommonPrefix(vector<string>& strs) {
        
       if(strs.size()==0) return "";
        return recur(strs,0,strs.size()-1);
        
    }
};