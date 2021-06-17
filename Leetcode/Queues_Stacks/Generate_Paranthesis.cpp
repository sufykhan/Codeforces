#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string>ans;
    void  gen(int n,int open=0,int close=0,int pos=0){
        static char str[20]; //Allocation of permanent address so that char array doesn;t loose its identity after return call
        if(close==n){
            ans.push_back(str);
        }
        if(open>close){
            str[pos]=')';
            gen(n,open,close+1,pos+1);
        }
        if(open<n){
            str[pos]='(';
            gen(n,open+1,close,pos+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        gen(n);
        return ans;
    }
    void generateParenthesis1(int n)
    {
        vector<vector<pair<int, int>>> v;
        vector<string>ans;
        set<string>temp;
        string start = "()";
        for (int i = 1; i <n; i++)
        {
            start += "()";
            vector<pair<int, int>> x;int cnt=0;
            for (int j = 1; j+i<=n; j++)
            {
                x.push_back({j*2-1,2*(i)+2*(cnt)});
                cnt++;
               
            }
             v.push_back(x);
        }
        temp.insert(start);
        for(auto rec:v){
            for(int i=0;i<rec.size();i++){
                 cout<<rec[i].first<<","<<rec[i].second<<" ";
                 string s=start;
                 for(int j=i;j<rec.size();j++){
                     s[rec[j].first]='(';
                     s[rec[j].second]=')';
                     temp.insert(s);
                 }
                 
            }
            cout<<"\n";
        }
        for(auto aa:temp){
            cout<<aa<<"\n";
        }
        //cout << start << " ";
    }
};


int main(void)
{
    Solution s;
    vector<string>ss;
    ss=s.generateParenthesis(4);
    for(auto xxx:ss){
        cout<<xxx<<"\n";
    }
    //s.generateParenthesis1(4);
    //cout << x << "\n";
    return 0;
}
