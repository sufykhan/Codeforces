#include <vector>
using namespace std;

vector<int> insertionSort(vector<int> arr) {
  // Write your code here.
	for(int i=1;i<arr.size();i++){
		int key=arr[i];
		int j=i-1;
		while(j>=0 && key<arr[j]){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
  return arr;
}
