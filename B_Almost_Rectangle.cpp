#include <bits/stdc++.h>
using namespace std;
typedef long long intl;
typedef vector<intl> vi;
typedef pair<intl,intl> pi;

#define F first
#define S second
#define pb push_back
#define mp make_pair
#define rep(i,a,n) for(intl i=a;i<n;i++)


void FASTIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

 void print(vector<intl>v){
for(auto x:v){
cout<<x<<' ';
}
cout<<endl;
}

bool sortbySec(pair<intl,intl>&a,pair<intl,intl>&b){
    return (a.second>b.second);
}
intl t,n;


void solve(intl row1,intl row2,intl col1,intl col2,char** str,intl n){
    intl row3,row4,col3,col4;
if(row1!=row2 && col1!=col2){
    row3=row2;col3=col1;
    row4=row1;col4=col2;
}
else if(row1==row2){
    if(row1+1<n){
        row3=row1+1;
        row3=row3;
        col3=col1;
        col4=col2;
    }
    else{
        row3=row1-1;
        row3=row3;
        col3=col1;
        col4=col2;
    }
}
else if(col1==col2){
  row3=row1;row4=row2;
  if(col1+1<n){
      col3=col1+1;
      col4=col3;
  }
  else{
      col3=col1-1;
      col4=col3;
  }
}
rep(i,0,n){
    rep(j,0,n){

        // if((i==row3 && j==col3)||(i==row4 && j==col4)){
        //     cout<<'*';
        // }
        // else{
            cout<<str[i][j];
        //}
    }
    cout<<"\n";
}
}
int main(){
    FASTIO();
    cin>>t;
    rep(ii,0,t){
        cin>>n;vi col(2);vi row(2);char str[n][n];
        rep(i,0,n){
            string s;cin>>s;
            //cout<<s<<"   "; 
            rep(j,0,n){
                str[i][j]=s[j];
                //cout<<str[i][j];
            }
            
            rep(j,0,n){
                if(s[j]=='*'){
                    col.pb(j);
                    row.pb(i);
                }
            }
        }
        intl row1=row[0],row2=row[1],col1=col[0],col2=col[1];
        // solve(row1,row2,col1,col2,str,n);

intl row3,row4,col3,col4;
if(row1!=row2 && col1!=col2){
    row3=row2;col3=col1;
    row4=row1;col4=col2;
}
else if(row1==row2){
    if(row1+1<n){
        row3=row1+1;
        row3=row3;
        col3=col1;
        col4=col2;
    }
    else{
        row3=row1-1;
        row3=row3;
        col3=col1;
        col4=col2;
    }
}
else if(col1==col2){
  row3=row1;row4=row2;
  if(col1+1<n){
      col3=col1+1;
      col4=col3;
  }
  else{
      col3=col1-1;
      col4=col3;
  }
}
rep(i,0,n){
    rep(j,0,n){

        if((i==row3 && j==col3)||(i==row4 && j==col4)){
            cout<<'*';
        }
        else{
           cout<<str[i][j];
        }
    }
    cout<<"\n";
}

}
}
