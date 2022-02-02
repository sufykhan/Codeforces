#include "bits/stdc++.h"
using namespace std;

int main(){
int arr[5]={0,2,1,2,0};
int n=sizeof(arr)/sizeof(arr[0]);
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
      
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;cin>>n;
	vector<int>v(n);
	vector<int>maxi(n);
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>v[i];
		if(i==0) maxi[i]=v[i];
		else{
			maxi[i]=max(v[i],maxi[i-1]);
			ans=max(ans,maxi[i]-v[i]);
		}
	}
	cout<<ans<<"\n";
	return 0;
}

