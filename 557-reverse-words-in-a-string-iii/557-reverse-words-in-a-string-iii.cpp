class Solution {
public:
    string reverseWords(string s) {
        stringstream str(s);
        string word;
        string ans="";
        while(str>>word){
            reverse(word.begin(),word.end());
            ans+=word;
            ans+=" ";
        }
        ans.pop_back();
        return ans;
    }
};