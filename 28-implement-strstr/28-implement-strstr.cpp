class Solution {
public:
    int strStr(string s, string n) {
        size_t val = s.find(n);
        if(val!=string::npos){
            return val;
        }
        return -1;
    }
};