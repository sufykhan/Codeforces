class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string>ans;
        for(auto i=s[0];i<=s[3];i++){
            for(auto j=s[1];j<=s[4];j++){
                ans.push_back({i,j});
            }
        }
        return ans;
    }
};