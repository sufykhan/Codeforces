#include <bits/stdc++.h>
using namespace std;

//Not able to do in the contest but the logic was very well cleared and correct.I was exepecting that it will be hard to implement so I leaved it coz of less time.

class Solution {
public:
    long long distinctNames(vector<string>&ideas) {
        long long res = 0, cnt[26][26] = {};
        unordered_set<string> s[26];
        for (auto &idea : ideas)
            s[idea[0] - 'a'].insert(idea.substr(1));
        for (int i = 0; i < 26; ++i)
            for (auto &suff : s[i])
                for (int j = 0; j < 26; ++j)
                    cnt[i][j] += s[j].count(suff) == 0;
        for (int i = 0; i < 26; ++i)
            for (int j = 0; j < 26; ++j)
                res += cnt[i][j] * cnt[j][i];
        return res;
        
    }
};

int main(void){
    Solution s;
    vector<string>v{"3","11","5","+","-"};
    int x=s.eval(v);
    cout<<x<<"\n";
    return 0;
}
