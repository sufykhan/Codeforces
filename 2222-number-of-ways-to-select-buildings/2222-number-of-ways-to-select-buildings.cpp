class Solution {
public:
    long long numberOfWays(string s) {
        int cnt0=0, cnt1=0;
        for(char &i: s){
            if(i=='1'){
                cnt1++;
            }
            else{
                cnt0++;
            }
        }
        int prevcnt0=0, prevcnt1=0;
        int long long ans=0;
        for(char &i: s){
            if(i=='1'){
                ans+=prevcnt0*cnt0;
                prevcnt1++;
                cnt1--;
            }
            else{
                ans+=prevcnt1*cnt1;
                prevcnt0++;
                cnt0--;
            }
        }
        return ans;
    }
};