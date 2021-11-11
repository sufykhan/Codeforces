//Only maximum sum known not the particular subarray

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long  maxSum=INT_MIN,dumSum=0,i=0;
        while(i!=n){
                dumSum+=arr[i];
                if(arr[i]>dumSum){
                    dumSum=arr[i];
                }
                maxSum=max(dumSum,maxSum);
                i++;
        }
        return maxSum;
        
    }
};