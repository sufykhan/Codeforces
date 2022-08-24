class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int zeros=0,second=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') zeros++;
            else if(zeros!=0) second=max(second+1,zeros);
        }
        return second;
    }
};