
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
        vector<int> v(n);
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x = v[i];
            s.insert(x);
        }

        vector<int> z;
        for (auto x : s)
        {
            z.push_back(x);
            mp[x]--;
        }

        vector<int> a;
        for (auto it : mp)
        {
            if (it.second > 0)
            {
                a.push_back(it.first);
                mp[it.first]--;
            }
        }

        vector<int> y;
        for (auto &it : mp)
        {
            while (it.second > 0)
            {
                y.push_back(it.first);
                it.second--;
            }
        }

        cout << z.size() + a.size() << endl;

        for (auto x : z)
            cout << x << " ";

        for (auto x : y)
            cout << x << " ";

        reverse(a.begin(), a.end());

        for (auto x : a)
            cout << x << " ";

        cout << endl;
    }

    return 0;
}
