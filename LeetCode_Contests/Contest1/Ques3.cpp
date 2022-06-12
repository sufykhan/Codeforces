#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //Not able to think in the contest but it was easy though || Reason : Overthinking and not beleiving that I can do 3rd
    void recur(int idx,vector<int>&v,vector<int>&nums,int k){
        
        if(idx==nums.size()){
            int x=INT_MIN;
            for(int i=0;i<k;i++){
                x=max(x,v[i]);
            }
            ans=min(ans,x);
            return;
        }
        for(int i=0;i<k;i++){
            v[i]+=nums[idx];
            recur(idx+1,v,nums,k);
            v[i]-=nums[idx];
        }
        
    }
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int>v(k,0);
        recur(0,v,cookies,k);
        return ans;
    }
};

int main(void){
    Solution s;
    vector<string>v{"3","11","5","+","-"};
    int x=s.eval(v);
    cout<<x<<"\n";
    return 0;
}
