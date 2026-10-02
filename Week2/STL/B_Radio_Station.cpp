#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    map<string, string> mp2;

    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;

        mp2[b] = a;
    }

    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;

        b.pop_back();

        cout << a << " " << b << "; #" << mp2[b] << endl;
    }

    return 0;
}