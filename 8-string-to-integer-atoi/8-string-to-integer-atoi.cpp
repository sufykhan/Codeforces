class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        
        int pos=0; // starting point of the string
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                pos=i+1;
            }
            else{
                break;
            }
        }
        //positive integer handled
        int type=1;
        if(s[pos]=='-'){
            pos++;
            type=-1;
        }
        else if(s[pos]=='+'){
            pos++;
        }
        
        
        
        while(s[pos]=='0') pos++;
        
        string news="";
        for(int i=pos;i<n;i++){
            int a=s[i]-'0';
            if(a>=0 && a<=9){
                news+=s[i];
            }
            else{
                break;
            }
        }
        long int upp=pow(2,31)-1;
        long long int low=-1*pow(2,31);
        
        if(news.size()>10){
            if(type==1) return upp;
            else return low;
        }
        //reverse(news.begin(),news.end());
        int nn=news.size();
        
        //long long int ans=0,mul=1;
        
        long long int ans=0,mul=pow(10,nn-1);
        
        for(int i=0;i<news.size();i++){
            int b=(news[i]-'0');
            ans+=mul*1LL*(b);
            //mul=mul*10;
            mul=mul/10;
            
            if(ans*type>upp) return upp;
            if(ans*type<low) return low;
        }

        ans=type*ans;
        return ans;
    }
};