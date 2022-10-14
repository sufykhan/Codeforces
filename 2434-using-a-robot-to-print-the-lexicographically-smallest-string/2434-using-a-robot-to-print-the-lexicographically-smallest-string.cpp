class Solution {
public:
    
    char give(vector<int>&freq){
        for(char x=0;x<26;x++){
            if(freq[x]!=0) return (x+'a');
        }
        return 'a';
    }
    string robotWithString(string s) {
     
        vector<int>freq(26,0);
        for(auto x:s) freq[x-'a']++;
        stack<char>t;
        string ans="";
        for(int i=0;i<s.size();i++){
            t.push(s[i]);
            freq[s[i]-'a']--;
            while(!t.empty() && t.top()<=give(freq)){
                ans+=t.top();
                t.pop();
            }
            
        }
        while(!t.empty()){
            ans+=t.top();
            t.pop();
        }
        return ans;
        
    }
};