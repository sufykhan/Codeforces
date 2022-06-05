class Solution {
public:
    vector<vector<string>>ans;
    bool isPalindrome(string s){
    
        for(int i=0;i<s.length()/2;i++){
            if(s[i]!=s[s.size()-i-1]){
                return false;
            }
        }
        return true;
    }
    void recur(string s,int target,int pos,vector<string>&v){
        
        if(target==0){
            ans.push_back(v);
            return;
        }
      
        for(int i=1;i<=s.size();i++){
            
            if(target-i>=0){
                
                string val="";
                for(int j=0;j<i&&j+pos<s.size();j++){
                    val+=s[j+pos];
                }
                if(isPalindrome(val)){
                    v.push_back(val);
                    target-=i;
                    recur(s,target,pos+i,v);
                    target+=i;
                    v.pop_back();
                }
               
            }
        }
        
    }
    vector<vector<string>> partition(string s) {
        
        int n=s.length();
        vector<string>arr;
        recur(s,n,0,arr);
        return ans;
    }
};