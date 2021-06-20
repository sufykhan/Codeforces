#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool visited[(int)(1e4+5)];
    
    int BFS(int start,int target){
        queue<int>q;
        q.push(start);
        visited[start]=true;
        int turns=0;
        while(!q.empty()){
            int size=q.size();
            turns++;
            for(int i=0;i<size;i++){
                int x=q.front();
                for(int j=1;j<=4;j++)
                {
                   int plus;
                    int fewe=(int)(pow(10,j-1)+0.5);
                    // 8490 1 10 100 1000
                    if((x/fewe)%(10)==9){
                        plus=x-fewe*9;
                    }
                    else{
                        plus=x+fewe;
                    }
                    if(!visited[plus]){
                        q.push(plus);
                        visited[plus]=true;
                    }
                    if(plus==target){
                        return turns;
                    }
                
                   int minus;
                 
                    if((x/fewe)%(10)==0){
                        minus=x+9*fewe;
                    }
                    else{
                       minus=x-fewe; 
                    }
                    
                   if(!visited[minus]){
                        q.push(minus);
                        visited[minus]=true;
                    }
                    if(minus==target){
                        return turns;
                    }
                }
                q.pop();
            }
                
            
        }
        return -1;
    }
    int openLock(vector<string>& deadends, string target) {
        memset(visited,0,sizeof(visited));
        for(auto xx:deadends){
            visited[stoi(xx)]=true;
        }
        if(stoi(target)==0){
            return 0;
        }
        if(visited[0]){
            return -1;
        }
        return BFS(0,stoi(target));
    }
};