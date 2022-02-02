//https://www.geeksforgeeks.org/quick-sort/


//Create a wall and place all element less than pivot to left and all element greater than pivot to right

#include <vector>
using namespace std;
int partition(vector<int>&arr,int low,int high){
	int wall=low-1;
	int pivot=arr[high-1];
	
	for(int i=low;i<high-1;i++){
		if(pivot>=arr[i]){
			 swap(arr[wall+1],arr[i]);
			 wall++;
		}
	}
	swap(arr[wall+1],arr[high-1]);
	return wall+1;
	
}
void quick(vector<int>&arr,int low,int high){
	if(high>low){
		
		int part=partition(arr,low,high);
		quick(arr,part+1,high);
		quick(arr,low,part);
	}
}
vector<int> quickSort(vector<int> arr) {
	
	quick(arr,0,arr.size());
	
  return arr;
}
