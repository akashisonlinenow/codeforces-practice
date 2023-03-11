#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    Faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<ll> b(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }

        vector<ll> pref(n + 5, 0);
        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + b[i];
        }

        vector<ll> times(n + 5, 0), add(n + 5, 0), ans(n + 5, 0);

        for (int i = 1; i <= n; i++)
        {
            if (a[i] >= (pref[n] - pref[i - 1]))
            {
                times[i]++;
                times[n + 1]--;
                continue;
            }
            int indx = -1;
            int low = i, high = n;
            while (low <= high)
            {
                int mid = low + (high - low) / 2;
                if (a[i] >= (pref[mid] - pref[i - 1]))
                {
                    indx = mid;
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
            if (indx == -1)
            {
                add[i] += a[i];
            }
            else
            {
                times[i]++;
                times[indx + 1]--;
                ll leftOver = a[i] - (pref[indx] - pref[i - 1]);
                if (indx + 1 <= n)
                {
                    add[indx + 1] += leftOver;
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            times[i] += times[i - 1];
        }

        for (int i = 1; i <= n; i++)
        {
            ans[i] = add[i] + (times[i] * b[i]);
        }

        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
