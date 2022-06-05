class Solution {
public:
    string getPermutation(int n, int k) {
        string ans="";
        for(int i=1;i<=n;i++){
            ans+=char(i+'0');
        }
        k--;
        if(k==0) return ans;
        k--;
        //cout<<ans<<" ";
        do{
            next_permutation(ans.begin(),ans.end());
            //cout<<ans<<" ";
        }
        while(k--);
        return ans;
    }
};