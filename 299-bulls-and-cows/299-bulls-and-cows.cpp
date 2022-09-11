class Solution {
public:
    string getHint(string s, string g) {
        int A=0,B=0;
        int cnt[10]={0};
        for(int i=0;i<s.size();i++){
            if(s[i]==g[i]){
               A++; 
            }
            else{
                cnt[s[i]-'0']++;
                cnt[g[i]-'0']--;
                B++;
            }
        }
        for(int i=0;i<10;i++){
            if(cnt[i]>0) B-=cnt[i];
        }
        string ans=to_string(A)+'A'+to_string(B)+'B';
        return ans;
    }
};