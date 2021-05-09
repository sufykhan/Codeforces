#include <iostream>
using namespace std;

int win[8][3] = {{0, 1, 2}, 
				{3, 4, 5}, 
				{6, 7, 8}, 
				{0, 3, 6},
				{1, 4, 7}, 
				{2, 5, 8}, 
				{0, 4, 8}, 
				{2, 4, 6}}; 

bool isCWin(char *board, char c)
{
	
	for (int i=0; i<8; i++)
		if (board[win[i][0]] == c &&
			board[win[i][1]] == c &&
			board[win[i][2]] == c )
			return true;
	return false;
}

bool isValid(char board[9])
{
	int xCount=0, oCount=0;
	for (int i=0; i<9; i++)
	{
	if (board[i]=='X') xCount++;
	if (board[i]=='O') oCount++;
	}
	if (xCount==oCount || xCount==oCount+1)
	{
	
		if (isCWin(board, 'O'))
		{
		
			if (isCWin(board, 'X'))
				return false;
			return (xCount == oCount);
		}
		if (isCWin(board, 'X') && xCount != oCount + 1)
		return false;

		return true;
	}
	return false;
}

// Driver program
int main()
{
    int t;cin>>t;
    for(int i=0;i<t;i++){
        char board[9];int reach=0;
        for(int j=0;j<3;j++){
              string s;cin>>s;
              for(int k=0;k<3;k++){
                  board[3*j+k]=(char)s[k];
                  if(board[3*j+k]=='_') reach++;  
              }
        }
       
        if(isValid(board)){
            if(reach>0 && !(isCWin(board,'X')||isCWin(board,'O'))){
                cout<<"2\n";
            }
            else{
            cout<<"1\n";
            }
        }
        else{
            cout<<"3\n";
        }
    }

}










// #include <bits/stdc++.h>
// using namespace std;
// typedef long long intl;
// typedef vector<intl> vi;
// typedef pair<intl, intl> pi;

// #define F first
// #define S second
// #define pb push_back
// #define mp make_pair
// #define rep(i, a, n) for (intl i = a; i < n; i++)

// void FASTIO()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// }

// bool isPrime(intl n)
// {
//     if (n <= 1)
//         return false;
//     if (n <= 3)
//         return true;

//     if (n % 2 == 0 || n % 3 == 0)
//         return false;

//     for (intl i = 5; i * i <= n; i = i + 6)
//         if (n % i == 0 || n % (i + 2) == 0)
//             return false;

//     return true;
// }

// void print(vector<intl> v)
// {
//     for (auto x : v)
//     {
//         cout << x << ' ';
//     }
//     cout << endl;
// }

// bool sortbySec(pair<intl, intl> &a, pair<intl, intl> &b)
// {
//     return (a.second > b.second);
// }
// intl t, n;
// string s;
// char arr[3][3];
// intl solve(){
//     intl reach=0,totalO=0,totalX=0;intl whichO=0,whichX=0;
//     rep(i,0,3){
//         cin>>s;intl X=0,O=0;
//         rep(j,0,3){
//             arr[i][j]=(char)s[j];
//             if(arr[i][j]=='_') reach++;
//             if(arr[i][j]=='X') X++,totalX++;
//             if(arr[i][j]=='O') O++,totalO++;
//         }
//         if(X==3) whichX++;
//         if(O==3) whichO++;
//     }
//     if(whichX==2){
//         return 3;
//     }
//     rep(i,0,3){
//         intl X=0,O=0;
//         rep(j,0,3){
            
//             if(arr[j][i]=='X') X++;
//             if(arr[j][i]=='O') O++;
//         }
//         if(X==3) whichX++;
//         if(O==3) whichO++;
//     }
//     if(arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2] && arr[0][0]=='X') {whichX++;}
//     if(arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2] && arr[0][0]=='O') {whichO++;}
//     if(arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0] && arr[0][0]=='X'){ whichX++;}
//     if(arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0] && arr[0][0]=='O') {whichO++;}

//     if(whichO+whichX>2 || totalX-totalO>1 || totalX-totalO<0 ){
//      return 3;
//     }
//     if(whichO+whichX==1){
//         if((whichO==1 && totalO==totalX)||(whichX==1 && totalX-totalO==1)){
            
//             return 1;
//         }
//         else{
//             //cout<<"3\n";
//             return 3;
//         }
//     }
//     if(whichO+whichX==0){
//         if(reach==0 && (totalX-totalO==1 || totalX-totalO==0)){
//             //cout<<"1\n";
//             return 1;
//         }
//         else if(reach>0 && (totalX-totalO==1 || totalX-totalO==0)){
//             //cout<<"2\n";
//             return 2;
//         }
//         else{
//             //cout<<"3\n";
//             return 3;
//         }
//     }
    
//     if(whichO+whichX==2){
//         if(whichO>0){
//             //cout<<"3\n";
//             return 3;
//         }
//         if(whichX==2 && ((totalO+1)==totalX) && reach==0){
//             //cout<<"1\n";
//             return 1;
//         }
        
//     }
//     return 3;
//     //cout<<whichO<<" "<<whichX<<" "<<"\n";
//     //cout<<whichX<<" "<<totalX<<" "<<totalO<<" "<<reach<<"\n";
// }
// int main()
// {
//     FASTIO();
//     cin >> t;
//     rep(ii, 0, t)
//     {
//        cout<<solve()<<"\n";
//     }
// }
