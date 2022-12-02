class Solution {
public:
    bool closeStrings(string word1, string word2) {
        sort(word1.begin(),word1.end());
        sort(word2.begin(),word2.end());
        if(word1==word2) return true;
        map<char,int>mp1;
        map<char,int>mp2;
        map<char,int>mp3;
        for(auto x:word1){
            mp1[x]++;
            mp3[x]=1;
        }
        
        for(auto y:word2){
            mp2[y]++;
        }
        for(auto l:mp2){
            int x=l.first;
            mp3[x]--;
            if(mp3[x]==0) mp3.erase(mp3.find(x));
        }
        if(mp3.size()!=0) return false;
        
        vector<int>val1;
        vector<int>val2;
        for(auto x:mp1){
            val1.push_back(x.second);
        }
        for(auto x:mp2){
            val2.push_back(x.second);
        }
        sort(val1.begin(),val1.end());
        sort(val2.begin(),val2.end());
        
        return val1==val2;
    }
};