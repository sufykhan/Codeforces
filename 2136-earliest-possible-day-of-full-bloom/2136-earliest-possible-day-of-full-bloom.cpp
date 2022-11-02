class Solution {
public:
    int earliestFullBloom(vector<int>& p, vector<int>& g) {
        vector<int>arr(p.size());
        iota(arr.begin(),arr.end(),0);
        sort(arr.begin(),arr.end(),[&](int a,int b){return g[a]>g[b];});
        int maxi=0,left=0;
        for(auto &i:arr){
            left+=p[i];
            maxi=max(maxi,left+g[i]);
        }
        return maxi;
    }
};