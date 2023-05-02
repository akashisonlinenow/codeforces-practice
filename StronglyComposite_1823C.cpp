#include <bits/stdc++.h>

using namespace std;

void find(long long n, map<int, int> &count) // prime factorising n and storing its count in hashmap that how many times it occured in factor
{

    for (int i = 2; i * i <= n; ++i)
    {
        while (n % i == 0)
        {
            n /= i;
            count[i]++;
        }
    }
    if (n > 1)
        count[n]++;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long long A[n];
        vector<int> prime_factor;
        map<int, int> count;
        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];

            find(A[i], count);
        }
        int m = 0;
        int ex = 0;
        for (auto &x : count)
        {
            //  cout<<x.first<<" "<<x.second<<"\n";
            m += (x.second / 2); // when 2 similar values form a strongly composite no.
            x.second %= 2;
            ex += x.second;
        }

        m += (ex / 3); // when 3 dissimilar values form a strongly composite no.

        cout << m << "\n";
    }
}