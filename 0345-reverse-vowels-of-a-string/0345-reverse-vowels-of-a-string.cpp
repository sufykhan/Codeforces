class Solution {
public:
    string reverseVowels(string s) {
        map<char,int>mp;
        mp['a']=1;
        mp['e']=1;
        mp['i']=1;
        mp['o']=1;
        mp['u']=1;
        mp['A']=1;
        mp['E']=1;
        mp['I']=1;
        mp['O']=1;
        mp['U']=1;
        string val="";
        for(auto x:s){
            if(mp.find(x)!=mp.end()){
                val+=x;
            }
        }
                
        string ans="";
        for(auto x:s){
            if(mp.find(x)!=mp.end()){
                ans+=val.back();
                val.pop_back();
            }
            else{
                ans+=x;
            }
            
        }
        return ans;
    }
};