class Solution {
public:
    int longestBeautifulSubstring(string word) {
       map<char,int>mp;
       mp['a']=1;
        mp['e']=2;
        mp['i']=3;
        mp['o']=4;
        mp['u']=5;
        
        vector<int>ans;
        for(auto x:word) ans.push_back(mp[x]);
        
        vector<pair<int,int>>v;
        
        int cnt=0;
        for(int i=1;i<ans.size();i++){
            if(ans[i]==ans[i-1]){
                cnt++;
            }
            else{
                v.push_back({ans[i-1],cnt+1});
                cnt=0;
            }
        }
       if(v.size()!=0 && v.back().first!=ans.back()) v.push_back({ans[word.size()-1],cnt+1});
        
        for(auto x:v) cout<<x.first<<" "<<x.second<<"\n";
        
        int maxi=0;
        for(int i=0;i<v.size();i++){
            if(v[i].first==1){
                int j=2;
                int cnt1=v[i].second;
                while(i+j-1<v.size() && v[i+j-1].first==j){
                    cnt1+=v[i+j-1].second;
                    j++;
                }
                if(j==6) maxi=max(cnt1,maxi);
            }
        }
        return maxi;
    }
};