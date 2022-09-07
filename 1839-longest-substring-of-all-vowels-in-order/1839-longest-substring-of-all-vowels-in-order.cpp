class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int maxi=0;
        for(int i=0,j=0;i<word.size();i++){
            if(word[i]=='a'){
                int cnt=0;
                for(j=i+1;j<word.size() && word[j-1]<=word[j];j++){
                    cnt+=word[j-1]<word[j];
                }
                if(cnt==4) maxi=max(maxi,j-i);
                i=j-1;
            }
          
        }
        return maxi;
    }
};