//Edit Distance
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

void edit_distance(char *X, char *Y, int m, int n)
{
    int L[m + 1][n + 1];

    for(int i=0;i<=m;i++){
        L[i][0]=i;
    }
    for(int i=0;i<=n;i++){
        L[0][i]=i;
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] ;
            else
                L[i][j] = 1+min(L[i - 1][j],min( L[i][j - 1],L[i-1][j-1]));
        }
    }

    //PRINT DP TABLE

    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            cout<<L[i][j]<<" ";
        }
        cout<<"\n";
    }


}


int main()
{
    char X[] = "SATURDAY";
    char Y[] = "SUNDAY";
    int m = strlen(X);
    int n = strlen(Y);
    edit_distance(X, Y, m, n);
    return 0;
}
