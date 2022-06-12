#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    //15min
    double calculateTax(vector<vector<int>>&nums, int maxi) {
        double ans=0,val;
        for(int i=0;i<nums.size();i++){
            double maxim=min((double)nums[i][0],(double)maxi);
            val=maxim;
            if(i>0) val-=nums[i-1][0];
            val=(val*nums[i][1])/100;
            ans+=val;
            if(maxim==(double)maxi){
                return ans;
            }
        }
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
