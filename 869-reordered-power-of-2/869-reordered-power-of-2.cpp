class Solution {
public:
    bool reorderedPowerOf2(int n) {
        long long ans=1;
        string val=to_string(n);
        sort(val.begin(),val.end());
        for(int i=0;i<=30;i++){ 
            string s=to_string(ans);
            sort(s.begin(),s.end());
            ans=ans*2;
            if(s==val){
                return true;
            }
        }
        return false;
    }
};