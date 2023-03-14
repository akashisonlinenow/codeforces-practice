#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int empboxes = 0, halfboxes = 0, fullboxes = 0;
    int arr[n + 5];
    int f = 0, d = 0;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            f++;
            if (empboxes == 0)
                halfboxes++;
            else
            {
                empboxes--;
                halfboxes++;
            }
        }

        else if (arr[i] == 2)
        {
            d++;
            while (halfboxes > 2)
            {

                halfboxes -= 2;
                fullboxes++;
                empboxes++;
            }
        }
    }
    int res2 = halfboxes + empboxes + fullboxes;

    if (d == n)
    {
        cout << 0 << endl;
    }
    else if (f == n)
    {
        cout << n << endl;
    }
    else
    {
        cout << (res2) << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        }
}