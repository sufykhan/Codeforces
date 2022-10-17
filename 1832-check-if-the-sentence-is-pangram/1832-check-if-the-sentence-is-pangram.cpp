class Solution {
public:
    bool checkIfPangram(string s) {
        int cnt=0;
        sort(s.begin(),s.end());
        for(auto &x:s){
            if((x-'a')==cnt) cnt++;
        }
        return cnt==26;
    }
};