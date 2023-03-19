// CP template in cpp by Akash Shridharan

#include <iostream>
#include <bits/stdc++.h>
// #include <sys/resource.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace chrono;
// using namespace __gnu_pbds;

// def
//  #define AkashShridharan 1

// Speed  ---> write "Code By AK" to take this piece of code
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define AK cout.tie(NULL);

// Aliases
using ll = long long;
using lld = long double;
using ull = unsigned long long;

// Constants
const lld pi = 3.141592653589793238;
const ll INF = LONG_LONG_MAX;
const ll mod = 1e9 + 7;

// TypeDEF
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll, ll> umll;
typedef map<ll, ll> mll;

// Macros
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define py cout << "YES\n";
#define pm cout << "-1\n"; // print minus 1
#define pn cout << "NO\n";
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()

// Debug
#ifdef AkashShridharan
#define debug(x)       \
    cerr << #x << " "; \
    cerr << x << " ";  \
    cerr << endl;
#else
#define debug(x) ;
#endif

// Operator overloads

// Sorting  the elements in a pair according to the second element
bool sorta(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
bool sortd(const pair<int, int> &a, const pair<int, int> &b) { return (a.second > b.second); }

// Code
void ak()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    unordered_map<char, int> mpp;
    // int count = 0;

    // int flag = 0;
    int i = 0;
    while (i < n)
    {
        if (mpp.find(s[i]) != mpp.end())
        {

            ll differentiation = i - mpp[s[i]];
            if (differentiation % 2 == 1)
            {
                cout << "No"
                     << "\n";
                return;
            }
            mpp[s[i]] = i;
        }
        else
        {
            mpp[s[i]] = i;
        }
        i++;
    }

    cout << "Yes"
         << "\n";

    // for (int i = 0; i < n - 1; i++)
    // {

    //     if (n == 1)
    //     {
    //         cout << "YES"
    //              << "\n";
    //         break;
    //     }

    //     if (n > 1)
    //     {
    //         if (s[i] == s[i + 1])
    //         {
    //             flag = 1;
    //             break;
    //         }
    //         if (s[i] != s[i + 1])
    //         {
    //             if (mpp[s[i]] == 1)
    //             {
    //                 count++;
    //             }
    //             continue;
    //         }
    //     }
    // }

    //     if (flag == 0)
    // {
    //     cout << "YES"
    //          << "\n";
    // }
    // if (flag == 1 || count > 1)
    // {
    //     cout << "NO"
    //          << "\n";
    // }

    // ll n;
    // cin >> n;

    // vll a(n);
    // fl(i, n)
    // {
    //     cin >> a[i];
    // }

    // sort(a.begin(), a.end(), greater<>());

    // // fl(i, n)
    // // {
    // //     cout << a[i] << " ";
    // // }
    // int m = 0;
    // int b = 0, flag = 0;

    // fl(i, n)
    // {
    //     if (a[i] % 2 == 0)
    //     {
    //         m += a[i];
    //     }
    //     else if (a[i] % 2 == 1)
    //     {
    //         b += a[i];
    //     }

    //     if (m > b)
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         flag = 1;
    //         break;
    //     }
    // }

    // if (flag == 0)
    // {
    //     cout << "YES"
    //          << "\n";
    // }
    // if (flag == 1)
    // {
    //     cout << "NO"
    //          << "\n";
    // }
}

// Main
int main()
{
    Code By AK // Speed is applied here...
        ll t;
    cin >> t;
    while (t--)
    {
        ak();
    }
    // ak();
    // fl(i,t) {//Kickstart
    //     cout<<"Case #"<<i+1<<": ";
    //     ak();
    //     cout<<"\n";
    return 0;
}