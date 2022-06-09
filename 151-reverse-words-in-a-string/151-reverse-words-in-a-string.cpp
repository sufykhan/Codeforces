class Solution {
public:
    string reverseWords(string s) {
        istringstream ss(s);
        string word;
        string ans="";
        while (ss >> word) 
        {
            ans=word+" "+ans;
        }
        ans.pop_back();
        return ans;
    }
};