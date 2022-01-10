#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=6;
    int arr[n]={1, 2, 3, -4, -1, 4};
    sort(arr,arr+n);
    int r=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0) r+=2;
    }
    int l=0;r=min(r-1,n-1);
    while(l<r){
        if(arr[l]>0) break;
        if(arr[l]<0 && l%2==1){
            swap(arr[l],arr[r]);
        
        }
        r--;
        l++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
}
