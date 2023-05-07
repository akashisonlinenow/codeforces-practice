
#include <bits/stdc++.h>
using namespace std;

const int sz = 1e5 + 10;
int ara[sz];

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int sum = 0;

        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &ara[i]);
            sum += ara[i];
        }

        int ans = -1e9;

        for (int i = 1; i < n; i++)
        {
            if (ara[i] == ara[i + 1])
            {
                if (ara[i] == 1)
                    ans = max(ans, sum - 4);
                else
                    ans = max(ans, sum + 4);
            }
            else
                ans = max(ans, sum);
        }

        printf("%d\n", ans);
    }

    return 0;
}