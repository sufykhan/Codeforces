class Solution {
public:
    string minimizeResult(string s) {
        int n=s.size();
        int plus=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='+'){
                plus=i;
                break;
            }
        }
        int mini=INT_MAX,posi=-1,posj=-1;
        string finals="";
        
        for(int i=plus-1;i>=0;i--){
            for(int j=plus+1;j<n;j++){
                string plus1=s.substr(i,plus-i);
                string plus2=s.substr(plus+1,j-plus);
                string muls1=s.substr(0,i);
                string muls2=s.substr(j+1,n-j+1);
                //cout<<muls1<<"<->"<<plus1<<"<->"<<plus2<<"<->"<<muls2<<"\n";
                string val=muls1+'('+ plus1 + '+'+plus2+')'+muls2;
                int ans=stoi(plus1)+stoi(plus2);
                if(muls1!="") ans=ans*(stoi(muls1));
                if(muls2!="") ans=ans*(stoi(muls2));
                
                if(ans<mini){
                    mini=ans;
                    finals=val;
                }
                
            }
        }
        
        return finals;
    }
};