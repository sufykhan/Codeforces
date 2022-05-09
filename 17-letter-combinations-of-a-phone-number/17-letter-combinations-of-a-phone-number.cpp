class Solution {
public:
    
    vector<string>ans;
    
    
    void recur(string digits,string s,int i,map<int,string>v){
        
        if(i>digits.size()){
            
            return;
        }
        if(s.size()==digits.size()){
            ans.push_back(s);
            return;
        }
        string xr=v[digits[i]-'0'];
        cout<<xr;
        for(auto x:xr){
            s+=x;
            recur(digits,s,i+1,v);
            s.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
        
        if(digits.size()==0){
            return ans;
        }
        map<int,string>v;
        v[2]="abc";
        v[3]="def";
        v[4]="ghi";
        v[5]="jkl";
        v[6]="mno";
        v[7]="pqrs";
        v[8]="tuv";
        v[9]="wxyz";
        string s="";
        recur(digits,s,0,v);
        
        return ans;
    }
};