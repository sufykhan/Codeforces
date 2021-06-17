#include <bits/stdc++.h>
using namespace std;
typedef long long intl;
void count(vector<int> v)
{
    intl n = v.size();
    intl j = 0, ans = 0;
    stack<int> s;
    intl health = 0;
    priority_queue<intl,vector<intl>,greater<intl>>gquiz;
    while (j<n)
    {
            if (health + v[j] >= 0)
            {
                s.push(v[j]);
                ans = max((intl)s.size(), ans);
                health+=v[j];
            }
            else
            {
                stack<intl> s1;intl flag=1;
                while (!s.empty())
                {
                    intl xx = s.top();
                    if( (xx<0 && xx<v[j] && gquiz.top()==xx)){
                        gquiz.pop();
                        health-=xx;
                        s.pop();
                        break;
                    } 
                    s.pop();
                    s1.push(xx);
                }
                if(s.empty()){
                    flag=0;
                }
                while (!s1.empty())
                {
                    s.push(s1.top());
                    s1.pop();
                }
                if(flag){
                s.push(v[j]);
                health+=v[j];
                }
                ans = max(ans, (intl)s.size());
            }
        if(v[j]<0) gquiz.push(v[j]);
        j++;
       
    }
    cout << ans << "\n";
  
}

int main()
{
    intl n;
    cin >> n;
    intl sum=0;
     priority_queue<intl,vector<intl>,greater<intl>>gq;
     intl ans=0;
    for (int i = 0; i < n; i++)
    {
        intl x;
        cin >> x;
        sum+=x;
        if(x<0) gq.push(x);
        ans++;
        if(sum<0){
            sum-=gq.top();
            gq.pop();
            ans--;
        }
    }
cout<<ans;
  //count(v);
    return 0;
}
