#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   void print(vector<vector<int>>& temp){
       for(auto x:temp){
            for(auto y:x){
                cout<<y<<" ";
            }
            cout<<"\n";
        }
   }
    bool mergeTriplets(vector<vector<int>>& v, vector<int>& target) {
        vector<pair<int,int>>p;
        for(int i=0;i<target.size();i++){
            p.push_back({target[i],i});
        }
        vector<vector<int>>temp;
        for(auto x:v){
            vector<int>c(x);
            for(int i=0;i<3;i++){
                   if(x[i]==p[i].first && i==p[i].second){
                       temp.push_back(c);
                       break;
                   }
            }
        }
        sort(temp.begin(),temp.end());
        for(int i=0;i<3;i++){
           for(int j=0;j<temp.size() ;j++){
               if(temp[j][i]>target[i]){
                   temp.erase(temp.begin()+j);
                   j--;
               }
           }
        }
        int flag=0;
        for(int i=0;i<3;i++){
            for(auto x:temp){
               if(x[i]==target[i]){
                   flag++;
                   break;
               }
            }
        }
        if(flag==3) return true;
        return false;
    
    }
};

int main()
{
    Solution Sufy;
    vector<int>target{2,49,92};
    vector<vector<int>>v{{2,5,3},{1,8,4},{2,8,3},{1,7,6},{1,7,8},{5,3,5}};
    cout<<Sufy.mergeTriplets(v,target);
    cout<<"\n";
    return 0;
}

//5 3 5
//2 8 3
// 2 5 3
// 1 7 8
// 1 7 6