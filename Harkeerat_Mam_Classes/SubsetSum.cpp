// A Dynamic Programming solution
// for subset sum problem
#include <iostream>
using namespace std;
#define int long long

bool isSubsetSum(int set[], int n, int sum)
{
	bool subset[n + 1][sum + 1];
	for (int i = 0; i <= n; i++)
		subset[i][0] = true;
	for (int i = 1; i <= sum; i++)
		subset[0][i] = false;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= sum; j++) {
			if (j < set[i - 1])
				subset[i][j] = subset[i - 1][j];
			if (j >= set[i - 1])
				subset[i][j] = subset[i - 1][j]
							|| subset[i - 1][j - set[i - 1]];
		}
	}

	
	for (int i = 0; i <= n; i++)
	{
	for (int j = 0; j <= sum; j++)
		printf ("%4d", subset[i][j]);
	cout <<"\n";
	}

	return subset[n][sum];
}

// Driver code
int32_t main()
{
	int set[] = { 9, 1, 3, 4, 8, 2};
	int sum =15;
	int n = sizeof(set) / sizeof(set[0]);
	if (isSubsetSum(set, n, sum) == true)
		cout <<"Found a subset with given sum";
	else
		cout <<"No subset with given sum";
	return 0;
}
// This code is contributed by shivanisinghss2110
