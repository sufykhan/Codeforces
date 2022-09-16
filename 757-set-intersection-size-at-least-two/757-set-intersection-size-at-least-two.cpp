class Solution {
public:
    
    bool contain(int x,int l,int r){
        if(x>=l && x<=r) return true;
        return false;
    }
    static bool comp(vector<int>&a,vector<int>&b){
        if(a[1]==b[1]){
            return a[0]<b[0];
        }
        return a[1]<b[1];
    }
    int intersectionSizeTwo(vector<vector<int>>& arr) {
    
        sort(arr.begin(),arr.end(),comp);
        
        set<int>s;
        s.insert(arr[0][1]-1);
        s.insert(arr[0][1]);
        for(int i=1;i<arr.size();i++)
        {
            auto x=s.end();
            x--;
            int a=*x;
            x--;
            int b=*x;
            
            int l=arr[i][0];
            int r=arr[i][1];
            //cout<<a<<" "<<b<<"-->"<<" "<<l<<" "<<r<<"\n";
            if(contain(a,l,r) && contain(b,l,r)) continue;
            
            if(!contain(a,l,r)) {
                s.insert(r);
            }
            if(!contain(b,l,r)){
                if(s.find(r)!=s.end()) s.insert(r-1);
                else s.insert(r);
            }
            // for(auto x:s) cout<<x<<" ";
            // cout<<"\n";
        }
        return s.size();
        
    }
};