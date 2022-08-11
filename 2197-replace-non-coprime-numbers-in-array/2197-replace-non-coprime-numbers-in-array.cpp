class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int>res;
        for(auto &x:nums){
            while(1){
                int gcd=__gcd(res.size()==0?1:res.back(),x);
                if(gcd==1) break;
                x=(x*1LL*res.back())/gcd;
                res.pop_back();
            }
            res.push_back(x);
        }
        return res;
    }
};