#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        if (n == 1)
        {
            cout << 1 << "\n";
            continue;
        }

        if (n % 2)
            cout << "-1\n";
        else
        {
            // we will generate values in fashion
            int tot = 0;
            int lim = n;
            int i = 0, j = n - 1;
            int c = 0;
            while (i <= j)
            {
                if (c % 2)
                {

                    int cur = 0;
                    if (j < tot)
                    {
                        cur = (n + j) - tot;
                    }
                    else
                        cur = j - tot;
                    cout << cur << " ";
                    tot = j;
                    j--;
                }
                else
                {
                    int cur = 0;
                    if (i <= tot)
                    {
                        cur = (n + i) - tot;
                    }
                    else
                        cur = i - tot;
                    cout << cur << " ";
                    tot = i;
                    i++;
                }
                c++;
            }
            cout << "\n";
        }
    }
}