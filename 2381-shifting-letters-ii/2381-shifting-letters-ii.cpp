class Solution {
public:

    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n=s.size();
        vector<int>v(n+1,0);
        for(int i=0;i<shifts.size();i++){
            int dir=shifts[i][2];
            if(dir==0) dir=-1;
            
            v[shifts[i][0]]+=dir;
            v[shifts[i][1]+1]-=dir;
        }
        
        for(int i=0,val=0;i<=n;i++){
            val=(val+v[i])%26;
            s[i]='a'+(26+(s[i]-'a')+val)%26;
        }
        return s;
    }
};