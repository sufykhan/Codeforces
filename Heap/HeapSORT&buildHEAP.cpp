//https://www.geeksforgeeks.org/building-heap-from-array/

#include <bits/stdc++.h>

using namespace std;

void deleteRoot(vector<int>&arr,int n){
    swap(arr[0],arr[n-1]);
    n--;
    heapify(0,arr,n)
}

void heapify(int i,vector<int>&arr,int n){
    if(2*i+2>=n) return;
    
    
    if(arr[2*i+2]>arr[2*i+1] && arr[2*i+2]>arr[i]){
        swap(arr[i],arr[2*i+2]);
        heapify(2*i+2,arr);
    }
    else if(arr[2*i+1]>=arr[2*i+2] && arr[2*i+1]>arr[i]){
        swap(arr[i],arr[2*i+1]);
        heapify(2*i+1,arr,n);
    }
}
//Output--> 17 15 13 9 6 5 10 4 8 3 1
int main()
{
    int n=11;
    vector<int>arr={1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    
    int targeti=n/2-1; //because all others are already heapified as they are leaf nodes;
    for(int i=targeti;i>=0;i--){
        for(int i1=0;i1<11;i1++){
        cout<<arr[i1]<<" ";
        }
        heapify(i,arr,n);
        cout<<"\n";
    }
    for(int i=0;i<11;i++){
        cout<<arr[i]<<" ";
    }

}