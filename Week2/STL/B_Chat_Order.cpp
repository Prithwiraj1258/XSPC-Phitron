#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    set<string> seen;

    for (int i = n - 1; i >= 0; i--)
    {
        if (seen.find(v[i]) == seen.end())
        {
            cout << v[i] << '\n';
            seen.insert(v[i]);
        }
    }

    return 0;
}
