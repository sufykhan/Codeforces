//Given a stream of integers and a window size, calculate the moving average of all integers in the sliding window
//n=3
//input ->1 ->1
//input ->5  ->1+5/2
//input->4   ->1+4+5/3
//input->3   ->4+5+3/3
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q,sum=0;cin>>n>>q;
    queue<int>que;
    for(int i=0;i<q;i++){
        int x;cin>>x;
        if(que.size()==n){
           que.pop();
        }
        que.push(x);
        sum=0;
        for (size_t i = 0; i < que.size(); ++i) {
        int elem = move(que.front());
        que.pop();
        cout<<elem<<" ";
        sum+=elem;
        que.push(move(elem));
        }
        cout<<"-->";
        cout<<(float)sum/(que.size())<<"\n";
    }
    
}
