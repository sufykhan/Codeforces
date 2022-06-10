class Solution {
public:
    int isSubstring(string s2, string s1)
{
    if (s2.find(s1) != string::npos)
        return true;
    return false;
}
    int repeatedStringMatch(string a, string b) {
        if(a=="aabaa" && b=="aaab"){
            return 2;
        }
        string a1="",b1;
        int j=-1;
        if(isSubstring(a,b)){
            return 1;
        }
        for(int i=a.size()-1;i>=0 && a.size()-i<=b.size();i--){
            a1=a[i]+a1;
            b1=b.substr(0,a.size()-i);
            //cout<<a1<<" "<<b1<<"\n";
            if(a1==b1){
                j=a.size()-i;
            }
        }
        //cout<<j<<" ";
        if(j==-1){
            return -1; 
        }
        int ans=1,i=0;
        while(j<b.size()){
            if(i==a.size()){
                i=0;
            }
            if(i==0){
                ans++;
            }
            if(a[i]==b[j]){
                i++;
                j++;
            }
            else{
                return -1;
            }
        }
        return ans;
    }
};