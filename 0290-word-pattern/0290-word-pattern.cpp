class Solution {
public:
    bool wordPattern(string p, string str) {
        stringstream s(str);
        string word;
        map<char,string>mp;
        map<string,char>mp1;
        int i=0;
        while(s>>word){
            if(mp.find(p[i])==mp.end()) {
                if(mp1.find(word)!=mp1.end()) return false;
                mp[p[i]]=word;
            }
            else{
                if(mp[p[i]]!=word) return false;    
            }
            mp1[word]=p[i];
            i++;
        }
        return i==(int)p.size();
    }
};