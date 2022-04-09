class Solution {
public:
    vector<long long> kthPalindrome(vector<int>& queries, int l) {
        
        long long power=(l+1)/2;
        
        power=pow(10,power-1);
        
        vector<long long>ans;
        
        for(auto q:queries){
            
             long long val=q+power-1;
             if(val>=power*10){
                 ans.push_back(-1);
             }
             else{
                string xx=to_string(val);
                string str=xx;
                reverse(xx.begin(),xx.end());
                str+=xx;
                 
                if(str.length()!=l){
                    str.erase((int)l/2,1);
                }
                
                long long yes=0,ten=1;
                for(int i=str.size()-1;i>=0;i--){
                    yes+=ten*1LL* (str[i]-'0');
                    ten=ten*10;
                }
                ans.push_back(yes);
                
             }
                 
        }
       return ans;
    }
};