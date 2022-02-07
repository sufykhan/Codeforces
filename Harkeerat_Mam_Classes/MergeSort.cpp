#include <vector>
using namespace std;

void merge(vector<int>&arr,int low,int mid,int end){
	
	vector<int>comp(end-low+2);
	int i=low;
	int j=mid+1;
	int k=0;
	while(i<=mid && j<=end){
		if(arr[j]<arr[i]){
			comp[k]=arr[j];
			j++;
			k++;
		}
		else{
			comp[k]=arr[i];
			i++;
			k++;
		}
	}
	while(i<=mid){
		comp[k]=arr[i];
		i++;
		k++;
	}
	while(j<=end){
		comp[k]=arr[j];
		j++;
		k++;
	}
	for(int i=low;i<=end;i++){
		arr[i]=comp[i-low];
	}
	
	
}
void mergeSortt(vector<int>&arr,int start,int end){
	 
	  if(end>start){
			int mid=start+(end-start)/2;
			mergeSortt(arr,start,mid);
			mergeSortt(arr,mid+1,end);
			merge(arr,start,mid,end);
		}
}
vector<int> mergeSort(vector<int> arr) {
	mergeSortt(arr,0,arr.size()-1);
	return arr;
}

int main(){
    vector<int>arr={5,6,7,1,2,3,4,5};
    mergeSort(arr);
}
