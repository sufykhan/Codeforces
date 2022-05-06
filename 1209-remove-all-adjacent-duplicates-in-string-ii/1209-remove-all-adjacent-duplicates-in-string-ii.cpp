class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.size(),j=0;
        vector<int>v(n);
        for(int i=0;i<n;i++,j++){
            s[j]=s[i];
            v[j]=(j>0&&s[j-1]==s[j])?v[j-1]+1:1;
            if(v[j]==k) j=j-k;
        }   
        return s.substr(0,j);
    }
};