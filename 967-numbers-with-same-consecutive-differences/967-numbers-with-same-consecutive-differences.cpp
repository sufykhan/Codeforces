class Solution {
public:
    vector<int>ans;
    
    void recur(int prev,int n,int k,string &val){
        
        if(n==0){
            char* v1=&val[0];
            int p=atoi(v1);
            ans.push_back(p);
            return;
        }
        
        for(int i=0;i<=9;i++){
            
            if(prev==10 && i==0) continue;
            
            if(prev==10 || abs(prev-i)==k){
                val+=char(i+'0');
                recur(i,n-1,k,val);
                val.pop_back();
            } 
            
        }
        
    }
    vector<int> numsSameConsecDiff(int n, int k) {
 
         string val="";
         recur(10,n,k,val);
         return ans;
    }
};