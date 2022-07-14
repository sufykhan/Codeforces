class Solution {
public:
    bool canChange(string start, string target) {
       
       string x=start;
       string y=target;
       
       sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        if(x!=y) return false;
        
       vector<pair<int,int>>v;
       int cnt1=0,cnt2=0;
       for(int i=0;i<target.size();i++){
           if(target[i]=='L') v.push_back({0,i}),cnt1++;
           if(target[i]=='R') v.push_back({1,i}),cnt2++;
       }
      
       // cout<<v.size();
        int j=0;
        for(int i=0;i<start.size();i++){
              if(start[i]=='R'){
                  cnt2--;
                  if(v[j].first!=1){
                      
                      return false;
                  }
                  if(v[j].second<i){
                      
                      return false;
                  }
                  j++;
              }
              else if(start[i]=='L'){
                  cnt1--;
                  if(v[j].first!=0){
                      
                      return false;
                  }
                  if(v[j].second>i){
                    
                      return false;
                  }
                  j++;
              }
        }
        if(cnt1==0 && cnt2==0 && j==v.size()) return true;
        return false;
        
    }
};