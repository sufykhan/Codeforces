#include "bits/stdc++.h"
using namespace std;

int main(){
int arr[9]={0,0,1,2,0,1,0,2,1};
int n=9;
int low=0,mid=0,high=n-1,i=0;
while(high>=mid){
    if(arr[i]==0){
        swap(arr[low],arr[i]);
        low++;
        mid++;
        i++;
    }
    else if(arr[i]==1){
        mid++;
        i++;
    }
    else{
        swap(arr[high],arr[i]);
        high--;
        i--;
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}

