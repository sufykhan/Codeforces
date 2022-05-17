class Solution {
public:
    double myPow(double x, int n) {
      
        if(n<0){
            x=1/x;
            n=abs(n);
        }
        if(n==0) return 1;
        if(n==1) return x;
        double ans=myPow(x,n/2);
       
        if(n%2) return ans*ans*x;
       
        return ans*ans;
        
      
    }
};