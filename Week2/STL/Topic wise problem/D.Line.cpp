
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

        string s;
        cin >> s;

        long long sum = 0;
        vector<int> gain;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                sum += i;
                gain.push_back(n - 2 * i - 1);
            }
            else
            {
                sum += n - i - 1;
                gain.push_back(2 * i - n + 1);
            }
        }

        sort(gain.rbegin(), gain.rend());

        for (int i = 0; i < n; i++)
        {
            if (gain[i] > 0)
            {
                sum += gain[i];
            }

            cout << sum << " ";
        }

        cout << '\n';
    }

    return 0;
}
