class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
       
        queue<pair<string,int>>q;
        q.push({start,0});
        
        map<string,bool>vis;
        for(auto &x:bank) vis[x]=false;
        while(!q.empty()){
            pair<string,int>p=q.front();
            q.pop();
            string top=p.first;
            
            if(top==end){
                return p.second;
            }
            for(auto &str:bank){
                if(vis[str]){
                    continue;
                }
                int cnt=0;
                for(int i=0;i<str.size();i++){
                     if(top[i]!=str[i]) cnt++;
                }
                if(cnt==1) {
                    q.push({str,p.second+1});
                    vis[str]=true;
                }
            }
        }
        return -1;
        
    }
};