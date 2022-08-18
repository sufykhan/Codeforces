class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int>mp;
        for(auto x:arr) mp[x]++;
        vector<int>v;
        for(auto x:mp) v.push_back(x.second);
        sort(v.begin(),v.end(),greater<int>());
        int n=arr.size();
        n=(n+1)/2;
        for(int i=1;i<=v.size();i++){
            if(n<=v[i-1]){
                return i;
            }
            else{
                n-=v[i-1];
            }
        }
        return -1;
        
    }
};