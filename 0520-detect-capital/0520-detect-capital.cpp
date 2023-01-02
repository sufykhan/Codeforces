class Solution {
public:
    bool detectCapitalUse(string word) {
        int pos=0;
        for(auto x:word){
            if((x-'a')<0) pos++;
        }
        if(pos==1 && (word[0]-'a')<0) return true;
        if(pos==word.size() || pos==0) return true;
        return false;
    }
};