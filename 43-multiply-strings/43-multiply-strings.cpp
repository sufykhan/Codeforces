class Solution {
public:
    string add(string s1,string s2){
        string ans="";
        int car=0,val;
         
        while(s1.size()>0 && s2.size()>0){
            int a=s1[s1.size()-1];
            int b=s2[s2.size()-1];
            int c= int(a-'0')+int(b-'0');
            val=(c+car)%10;
            car=(c+car)/10;
            ans=char(val+'0')+ans;
            s1.pop_back();
            s2.pop_back();
        }
        while(s1.size()>0){
            int b=s1[s1.size()-1];
            int c= int(b-'0');
            val=(c+car)%10;
            car=(c+car)/10;
            ans=char(val+'0')+ans;
            s1.pop_back();
        }
        while(s1.size()>0){
            int b=s2[s2.size()-1];
            int c= int(b-'0');
            val=(c+car)%10;
            car=(c+car)/10;
            ans=char(val+'0')+ans;
            s2.pop_back();
        }
        if(car>0){
            ans=char(car+'0')+ans;
        }
        return ans;
    }
    string mul(string s,int v,int k){
       
        string ans="";
        int val,car=0,plus;
        for(int i=s.size()-1;i>=0;i--){
            
            val=s[i]-'0';
            
            
            plus=(val*v+car)%10;
            car=(val*v+car)/10;
            ans=char(plus+'0')+ans;
            // cout<<val<<" "<<v<<" ";
            // cout<<ans<<"-->\n";
        }
        if(car!=0) ans=char(car+'0')+ans;
        for(int i=0;i<k;i++){
            ans+='0';
        }
        return ans;
    }
    string multiply(string nums1, string nums2) {
        int carry=0,left;
     
        string ans="",prevS;
        for(int i=nums2.size()-1;i>=0;i--){
                int val=nums2[i]-'0';
                
                string newS=mul(nums1,val,nums2.size()-i-1);
               // cout<<newS<<" ";
                if(i==nums2.size()-1) prevS=newS; 
                else prevS=add(newS,prevS);
        }
        bool flag=false;
        for(int i=0;i<prevS.size();i++){
            if(prevS[i]!='0'){
                flag=true;
            }
            if(flag) ans+=prevS[i];
        }
        if(!flag) return "0";
        return ans;
    }
};