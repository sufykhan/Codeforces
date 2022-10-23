class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int>mp;
        for(auto x:nums) mp[x]++;
        int cnt=1;
        int sec;
        for(auto x:mp){
            if(x.second==2){
                sec=x.first;
            }
            if(x.first==cnt) cnt++;
        }
        return {sec,cnt};
    }
};