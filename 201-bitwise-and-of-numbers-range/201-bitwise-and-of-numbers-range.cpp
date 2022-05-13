class Solution {
public:
    int ans=0;
    void calc(int left,int right){
        
        cout<<left<<" "<<right<<"\n";
        
        if(left==0 || right==0){
            return;
        }
        int x=log2(left);
        int y=log2(right);
        
        if(x==y){
            left=left^(1<<x);
            right=right^(1<<y);
            ans+=1<<x;
            calc(left,right);
        }
        else{
            return;
        }
//         else if(x>y){
//             left=left^(1<<x);
//             calc(left,right);
            
//         }
//         else{
//             right=right^(1<<y);
//             calc(left,right);
            
//         }
        
    }
    int rangeBitwiseAnd(int left, int right) {
         
      
         calc(left,right);
         return ans;
        
    }
};