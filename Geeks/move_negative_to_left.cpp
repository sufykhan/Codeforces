#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int l=0,r=0;
    while(r<=n){
        if(arr[r]<0){
            swap(arr[l],arr[r]);
            l++;
        }
        r++;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}