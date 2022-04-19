class Solution {
public:
    
    int recur(int i,string s,vector<int>&v){
        if(s[i]=='0'){
            return 0;
        }
        if(i>=s.size()-1){
            return 1;
        }
      
        if(v[i]!=-1){
            return v[i];
        }
        string b=s.substr(i,2);
        int way1=recur(i+1,s,v);
        int way2=0;
        if(stoi(b)>0 && stoi(b)<=26){
            way2=recur(i+2,s,v);
        }
        return v[i]=way1+way2;
        
    }
    int numDecodings(string s) {
           int ans;
           vector<int>v(s.size()+1,-1);
           ans=recur(0,s,v);
           return ans;
    }
};