class Solution {
public:
    //17min
    vector<string> removeAnagrams(vector<string>& arr) {
        int n=arr.size();
        string st="";
        vector<string>ans;
        for(int i=0;i<n;i++){
            map<char,int>mp;
            for(int j=0;j<arr[i].size();j++){
                mp[arr[i][j]]++;
            }
            for(int j=0;j<st.size();j++){
                mp[st[j]]--;
            }
            bool flag=true;
            for(auto &x:mp){
                if(x.second!=0){
                    flag=false;
                }
            }
            
            if(!flag){
                st=arr[i];
                ans.push_back(st);
            }
            
        }
        return ans;
        
    }
};