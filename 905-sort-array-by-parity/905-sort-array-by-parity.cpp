class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        
        int l=0;int r=(int)arr.size();
        if(r==0) return arr;
        r--;
        int cnt=0;
        for(int i=0;i<=r;i++){
            if(arr[i]%2==0) cnt++;
        }
        if(cnt==0 || cnt==r+1) {return arr;}
        
        while(r>=l){
            while(arr[l]%2==0) l++; 
            while(arr[r]%2==1) r--;
            if(r>=l){
            swap(arr[l],arr[r]);
            l++;r--;
            }
        }
        return arr;
        
    }
};