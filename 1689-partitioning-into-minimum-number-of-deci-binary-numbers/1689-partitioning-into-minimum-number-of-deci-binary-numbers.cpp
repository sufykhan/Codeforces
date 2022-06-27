class Solution {
public:
    int minPartitions(string s) {
        
        sort(s.begin(),s.end());
       // cout<<s<<" ";
        int ans=s[0]-'0';
        int sum=s[0]-'0';
        for(int i=1;i<s.size();i++){
            int a=(s[i]-'0')-(s[i-1]-'0');
            sum+=a;
            ans+=sum;
        }
        return sum;
    }
};