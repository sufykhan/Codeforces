class Solution {
public:
   static bool comp(vector<int> &a,vector<int> &b){
        if(a[0]==b[0]){
            return a[1]>b[1];
        }
        return a[0]<b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end(),comp);
    
        vector<int>left(n,-1);
        stack<int>s;
        
        for(int i=0;i<n;i++){
            while(!s.empty()&& arr[i][1]>arr[s.top()][1] && arr[i][0]>arr[s.top()][0]){
                left[s.top()]=i;
                s.pop();
            }
            s.push(i);
        }
        
        int ans=0;
        for(int i=0;i<n;i++){
            if(left[i]!=-1) ans++;
        }
        return ans;
        
    }
};