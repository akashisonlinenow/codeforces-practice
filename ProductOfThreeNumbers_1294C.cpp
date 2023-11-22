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

        int a = 1, b = 1, c = 1;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                a = i;
                break;
            }
        }

        n = n / a;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i != a)
                {
                    b = max(b, i);
                }
                if ((n / i) != i)
                {
                    if ((n / i) != a)
                    {
                        b = min(b, n / i);
                    }
                }
            }
        }

        c = n / b;
        if (a != b && b != c && a != c && c != 1 && b != 1 && c != 1)
        {
            cout << "YES"
                 << "\n";
            cout << a << " " << b << " " << c << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}