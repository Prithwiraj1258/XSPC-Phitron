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

        vector<int> v(2 * n);

        for (int i = 0; i < 2 * n; i++)
        {
            cin >> v[i];
        }

        // Mirror elements compare and swap
        for (int i = 0; i < n; i++)
        {
            if (v[i] < v[2 * n - 1 - i])
            {
                int temp = v[i];
                v[i] = v[2 * n - 1 - i];
                v[2 * n - 1 - i] = temp;
            }
        }

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += v[i];
        }

        cout << sum << endl;
    }

    return 0;
}