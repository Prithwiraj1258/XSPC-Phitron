#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long a[n];

        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        long long pref[n];

        pref[0] = a[0];

        for (long long i = 1; i < n; i++)
        {
            pref[i] = pref[i - 1] + a[i];
        }

        long long ans = 0;

        for (long long i = 1; i < n; i++)
        {
            // a[0] ... a[i-1]
            long long s1 = pref[i - 1];

            // a[i] ... a[n-1]
            long long s2 = pref[n - 1] - pref[i - 1];

            long long c1 = i;
            long long c2 = n - i;

            long long cur = s1 * c2 + s2 * c1;

            ans = max(ans, cur);
        }

        cout << ans << '\n';
    }

    return 0;
}