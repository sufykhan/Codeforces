class Solution{
  public:
    int minJumps(int arr[], int n){
        stack<int>s;
        if(arr[0]==0 && n==1) return 0;
        if(arr[0]==0 && n!=1) return -1;
        for(int i=n-1;i>=0;i--){
            s.push(arr[i]);
        }
        int counter=0,ans=1;
        while(1){
            int y=s.top();
            counter+=y;
            if(counter>=(n-1)){
                return ans; 
            }
            s.pop();int maxi=INT_MIN;
            for(int i=1;i<=y;i++){
                maxi=max(maxi,s.top()-(y-i));
                s.pop();
            }
            if(maxi<=0){
                return -1;
            }
            s.push(maxi);
            ans++;
        }
    }
};