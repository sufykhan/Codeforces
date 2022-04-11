class Solution {
public:
    int jump(vector<int>& arr) {
        
        
        int n=arr.size();
        if(n==1) return 0;
        int total=0;
        for(int i=0;i<n;i++){
            total++;
            int jump=arr[i];
            if(arr[i]+i>=n-1){
                break;
            }
            int maxi=INT_MIN,pos=-1,k=1;
            for(int j=i+1;j<i+1+jump;j++){
                
                if(arr[j]+k>maxi){
                    maxi=arr[j]+k;
                    pos=j;
                }
                k++; 
            }
            i=pos-1;
        }
        return total;
        
    }
};