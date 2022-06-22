class Solution {
public:
    //50min
    string convert(string fin){
        if(fin=="0") return "0.00";
        if(fin.size()==1) fin="0"+fin;
        fin.insert(fin.begin()+fin.size()-2,'.');
        if(fin[0]=='.') fin.insert(fin.begin(),'0');
        return fin;
    }
    string discountPrices(string s, int dis) {
        float ans=0.00;
        string s2="";
        for(int i=0;i<s.size();i++){
            s2+=s[i];
            if(s[i]=='$' && (i==0 || s[i-1]==' ')){
                int idx=i+1;
                string val="";
                while(s[idx]-'0'>=0 && s[idx]-'0'<10){
                    val+=s[idx];
                    idx++;
                }
                long long int cnt;
                //if(idx!=s.size() && s[idx]==' ') continue;
                if(val!="" && (idx==s.size() || s[idx]==' ')) 
                {
                    cnt=stol(val);
                    long long  int ans=(100-dis)*1LL*cnt;
                    string add=convert(to_string(ans));
                    s2+=add;
                    i=idx-1;
                }
            }
        }
     
        
        return s2;
    }
};