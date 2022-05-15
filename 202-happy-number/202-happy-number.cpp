class Solution {
public:
    int go(int n){
        int ans=0;
        while(n!=0){
            ans+=(n%10)*(n%10);
            n=n/10;
        }
        return ans;
    }
    bool isHappy(int n) {
         int fast=n,slow=n;
         do{
             fast=go(go(fast));
             slow=go(slow);
             if(fast==1){
                 return true;
             }
         } while(fast!=slow);
         return false;
         
    }
};