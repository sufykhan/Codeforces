#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int squares[100];
    int numSquares(int n) {
        queue<int>q;
        q.push(n);
        int cnt=0;
        while(!q.empty()){
            cnt++;
           int size=q.size();
            for(int j=0;j<size;j++){
            int target=q.front();
            q.pop();
            for(int i=1;i<=floor(sqrt(target));i++){
                if((i*i)==target){
                    return cnt;
                }
                else{
                    q.push(target-i*i);
                }
            }
            }
        }
        return cnt;
    }
};