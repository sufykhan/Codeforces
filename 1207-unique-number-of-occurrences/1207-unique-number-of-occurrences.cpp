class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>val;
        unordered_map<int,int>mp;
        for(auto &x:arr) mp[x]++;
        for(auto x:mp) val.push_back(x.second);
        sort(val.begin(),val.end());
        int n1=val.size();
        val.resize(distance(val.begin(),unique(val.begin(),val.end())));
        int n2=val.size();
        return n1==n2;
    }
};