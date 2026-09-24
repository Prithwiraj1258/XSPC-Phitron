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

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // First and last element
        if (a[0] == -1)
            a[0] = 1;

        if (a[n - 1] == -1)
            a[n - 1] = 1;

        bool found = false;
        int cnt = 0;

        // Count existing 1s
        for (int x : a)
        {
            if (x == 1)
                cnt++;
        }

        for (int i = 0; i < n; i++)
        {

            if (a[i] == 1)
                found = true;

            if (a[i] == -1 && !found && i != n - 1 && n != 1)
            {
                a[i] = 1;
            }
            else if (a[i] == -1 && cnt < 2)
            {
                a[i] = 1;
            }
            else if (a[i] == -1 && found && i != n - 1 && n != 1)
            {
                a[i] = 0;
            }
            else if (a[i] == -1 && i != 0 && i != n - 1 && a[i + 1] == -1)
            {
                a[i] = 0;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << '\n';
    }

    return 0;
}