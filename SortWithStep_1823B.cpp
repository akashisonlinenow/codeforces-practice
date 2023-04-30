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
    // refer a code daily utube

    int n, k;
    cin >> n >> k;
    vll v(n);
    fl(i, n)
    {
        cin >> v[i]; // {1,2,3,4,5,6,7}
    }

    vector<set<int>> sorted, actual; // sorted={1,4,7},{2,5},{3,6}
    fl(i, k)
    {
        set<int> temp, ac;
        for (int j = i; j < n; j += k)
        {
            temp.insert(j + 1);
            ac.insert(v[j]);
        }
        actual.pb(ac);
        sorted.pb(temp);
    }
    int diff = 0;
    fl(i, k)
    {
        for (auto &j : sorted[i])
        {
            if (actual[i].find(j) == actual[i].end())
                diff++;
        }
    }
    if (diff == 0)
        cout << 0 << "\n";
    else if (diff == 2)
        cout << 1 << "\n";
    else
        cout << -1 << "\n";
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
