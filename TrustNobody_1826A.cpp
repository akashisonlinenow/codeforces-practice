#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> l(n);
    for (auto &i : l)
    {
        cin >> i;
    }
    for (int cnt_liars = 0; cnt_liars <= n; ++cnt_liars)
    {
        int actual = 0;
        for (auto i : l)
        {
            if (!(cnt_liars >= i))
            {
                ++actual;
            }
        }
        if (actual == cnt_liars)
        {
            cout << cnt_liars << '\n';
            return;
        }
    }
    cout << "-1\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}