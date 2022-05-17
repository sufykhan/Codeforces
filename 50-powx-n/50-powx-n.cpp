class Solution {
public:
    double myPow(double x, int n1) {
        long long n=n1;
        if(n<0){
            n=-1*n;
            x=double(1/x);
        }
        double ans=1;
        while(n>0){
            
            if(n%2==1){
                ans=ans*x;
                n--;
            }
            else{
                x=x*x;
                n=n/2;
            }
        }
        return ans;
        
      
    }
};