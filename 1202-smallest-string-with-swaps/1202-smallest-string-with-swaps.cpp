class Solution {
public:
    
    static const int N = 100001;
    vector<int> v[N];
    bool vis[N];
    
    void dfs(int i,vector<int>&arr,vector<char>&val,string &s){
        arr.push_back(i);
        val.push_back(s[i]);
        vis[i]=true;
        for(auto x:v[i]){
            if(!vis[x]){
                dfs(x,arr,val,s);
            }
        }
        
    }
    
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int n=s.size();
       
        for(auto x:pairs){
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
        }
        
       
        
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                
                vector<int>tar;
                vector<char>tarC;
                
                dfs(i,tar,tarC,s);
                
                sort(tar.begin(),tar.end());
                sort(tarC.begin(),tarC.end());
                
                for (int index = 0; index < tar.size(); index++) {
                    s[tar[index]] = tarC[index];
                }
                
            }
        }
        return s;

        
    }
};