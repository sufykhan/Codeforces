/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int row,col;cin>>row>>col;
    string arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            string s;cin>>s;
            arr[i][j]=s;
            //cout<<s<<" ";
        }
        //cout<<"\n";
    }
    for(int i=0;i<row-1;i++){
        // cout<<i+1<<"-->\n";
        // map<string,pair<int,int>>mp;
        // for(int j=0;j<col;j++){
        //         mp[arr[i][j]]={0,0};
        // }
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<"  ";
        //    if(arr[row-1][j]=="Y"){
        //        mp[arr[i][j]].first++;
        //    }
        //    else{
        //         mp[arr[i][j]].second++;
        //    }
        }
        // for(auto x:mp){
        //     cout<<x.first<<"\n";
        // }
    }
    
}
