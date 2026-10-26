
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

        deque<int> q;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            q.push_back(x);
        }


        while (q.size() >= 2)
        {
            int f = q.front();
            int e = q.back();

            int mn = 1, mx= n;

            if (f == mx || f == mn)
            {
                q.pop_front();
                lm;
            }
            else if (e == mx || e == mn)
            {
                q.pop_back();
                r--;
            }
            else
            {
                break;
            }

        }

        if (q.size() < 2)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << l << " " << r << endl;
        }
    }

    return 0;
}
