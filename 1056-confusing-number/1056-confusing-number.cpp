class Solution {
public:
    bool confusingNumber(int n) {
        if(n==0) return false;
        map<int,int>mp;
        mp[0]=0;
        mp[8]=8;
        mp[9]=6;
        mp[1]=1;
        mp[6]=9;
        
        string s="";
        int comp=n;
        while(n!=0){
            int x=n%10;
            if(mp.find(x)==mp.end()) return false;
            s+=(mp[x]+'0');
            n=n/10;
        }
        int val=stoi(s);
        return val!=comp;
    }
};