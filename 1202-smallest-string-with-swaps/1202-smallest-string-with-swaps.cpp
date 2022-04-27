class Solution {
public:
    void dfs(int i,vector<vector<int>>&v,vector<bool>&vis,vector<int>&arr,vector<char>&val,string &s){
    arr.push_back(i);
    val.push_back(s[i]);
    vis[i]=true;
    for(auto x:v[i]){
        if(!vis[x]){
            dfs(x,v,vis,arr,val,s);
        }
    }
    
}

string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
    int n=s.size();
    vector<vector<int>>v(n,vector<int>());
    for(auto x:pairs){
        v[x[0]].push_back(x[1]);
        v[x[1]].push_back(x[0]);
    }
    
    vector<bool>vis(n,false);
    
    
    for(int i=0;i<n;i++){
        if(!vis[i]){
            vector<int>tar;
            vector<char>tarC;
            dfs(i,v,vis,tar,tarC,s);
            sort(tar.begin(),tar.end());
            sort(tarC.begin(),tarC.end());
            for (int index = 0; index < tar.size(); index++) {
                s[tar[index]] = tarC[index];
            }
        }
    }
    return s;
    
}
//     static const int N = 100001;
//     vector<int> v[N];
//     bool vis[N];
    
//     void dfs(int i,vector<int>&arr,vector<char>&val,string &s){
//         arr.push_back(i);
//         val.push_back(s[i]);
//         vis[i]=true;
//         for(auto x:v[i]){
//             if(!vis[x]){
//                 dfs(x,arr,val,s);
//             }
//         }
        
//     }
    
//     string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
//         int n=s.size();
       
//         for(auto x:pairs){
//             v[x[0]].push_back(x[1]);
//             v[x[1]].push_back(x[0]);
//         }
        
       
        
        
//         for(int i=0;i<n;i++){
//             if(!vis[i]){
                
//                 vector<int>tar;
//                 vector<char>tarC;
                
//                 dfs(i,tar,tarC,s);
                
//                 sort(tar.begin(),tar.end());
//                 sort(tarC.begin(),tarC.end());
                
//                 for (int index = 0; index < tar.size(); index++) {
//                     s[tar[index]] = tarC[index];
//                 }
                
//             }
//         }
//         return s;

        
//     }
};