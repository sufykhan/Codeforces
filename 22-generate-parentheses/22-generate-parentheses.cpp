class Solution {
public:
    vector<string>ans;
    
    void recur(int n,string s,int cnt){
        
        if(s.size()==2*n){
            if(cnt==0) ans.push_back(s);
            return;
        }
        if(cnt<0 || cnt>n){
            return;
        }
        s+='(';
        recur(n,s,cnt+1);
        s.pop_back();
        s+=')';
        recur(n,s,cnt-1);
        s.pop_back();
        
        
    }
    vector<string> generateParenthesis(int n) {
        
        string s="";
        recur(n,s,0);
        return ans;
        
    }
};