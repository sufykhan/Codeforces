class Solution {
public:
    
    void val(string s1,vector<int>&v1){
        s1+='.';
        string r="";
        for(int i=0;i<s1.size();i++){
            if(s1[i]!='.') r+=s1[i];
            else {
                v1.push_back(stoi(r));
                r="";
            }
        }
    }
    int compareVersion(string s1, string s2) {
        
        vector<int>v1;
        vector<int>v2;
        
        val(s1,v1);
        val(s2,v2);
        
        for(int i=0;i<v1.size() && i<v2.size();i++){
            if(v1[i]>v2[i]){
                return 1;
            }
            else if(v1[i]<v2[i]){
                return -1;
            }
        }
       
        for(int i=min(v1.size(),v2.size());i<max(v1.size(),v2.size());i++){
            if(i<v1.size()){
                if(v1[i]>0){
                    return 1;
                }
            }
            if(i<v2.size()){
                if(v2[i]>0){
                  
                    return -1;
                }
            }
        }
        return 0;
        
    }
};