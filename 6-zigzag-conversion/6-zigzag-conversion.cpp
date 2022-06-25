class Solution {
public:
   static bool sortBy(const pair<int,pair<int,int>>&a,const pair<int,pair<int,int>>&b){
        if(a.second.first<b.second.first) return true;
       
        if(a.second.first==b.second.first){
            return a.second.second<b.second.second;
        }
        return false;
    
    }
    string convert(string s, int n) {
        if(n==1) return s;
        vector<pair<int,pair<int,int>>>v;
        int row=0,col=0,type=1;
        for(int i=0;i<s.size();i++){
            v.push_back({i,{row,col}});
            
            row+=type;
            if(row==n&&col%2==0) col++,row=n-2,type=-1;
            else if(row==-1 &&col%2==1) col++,row=1,type=1;
            
            
        }
        sort(v.begin(),v.end(),sortBy);
        string ans="";
        for(int i=0;i<v.size();i++){
            ans=ans+s[v[i].first];
        }
        return ans;
    }
};