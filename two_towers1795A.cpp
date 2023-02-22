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
int ak() // referred to binarymagic utube...
{
    ll n, m;
    cin >> n >> m;

    string s1 = "", s2 = "";
    cin >> s1 >> s2;

    string temp = "";
    bool flag = true;

    for (int i = 0; i + 1 < n; i++)
    {
        if (s1[i] == s1[i + 1])
        {
            temp = s1.substr(i + 1, n);
            flag = false;
            break;
        }
    }

    if (!flag)
    {
        reverse(temp.begin(), temp.end());
        s2 += temp;
        for (int i = 0; i + 1 < s2.size(); i++)
        {
            if (s2[i] == s2[i + 1])
            {
                cout << "NO"
                     << "\n";
                return 0;
            }
        }
    }

    temp = "";
    flag = true;
    for (int i = 0; i + 1 < m; i++)
    {
        if (s2[i] == s2[i + 1])
        {
            temp = s2.substr(i + 1, m);
            flag = false;
            break;
        }
    }

    if (!flag)
    {
        reverse(temp.begin(), temp.end());
        s1 += temp;
        for (int i = 0; i + 1 < s1.size(); i++)
        {
            if (s1[i] == s1[i + 1])
            {
                cout << "NO"
                     << "\n";
                return 0;
            }
        }
    }

    cout << "YES"
         << "\n";
    return 0;
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
