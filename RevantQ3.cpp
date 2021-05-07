#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'doubleSize' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. LONG_INTEGER_ARRAY arr
 *  2. LONG_INTEGER b
 */

long doubleSize(vector<long> arr, long b) {
    long n=(long)arr.size();
    sort(arr.begin(),arr.end());
    for(long i=0;i<n;i++){
        if(arr[i]%b==0){
            b=2*b;
        }
    }
    return b;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    vector<long> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        long arr_item = stol(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    string b_temp;
    getline(cin, b_temp);

    long b = stol(ltrim(rtrim(b_temp)));

    long result = doubleSize(arr, b);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
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
// intl t, n,k;

// void solve(){
//     cin>>n>>k;
//     vi arr(n);
//     rep(i,0,n){
//         cin>>arr[i];
//     }
//     sort(arr.begin(),arr.end());
//     //print(arr);
//     intl cnt=0,num=k;
//     rep(i,0,n){
//         if(arr[i]%num==0){
//             num=num*num;
//             cnt++;
//         }
//     }
//     cout<<num<<"\n";

// }
// int main()
// {
//     FASTIO();
    
//         solve();
// }
