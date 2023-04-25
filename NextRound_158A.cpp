#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a[10000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= a[k + 1] && a[i] > 0)
            count++;
    }
    cout << count << "\n";
    return 0;
}