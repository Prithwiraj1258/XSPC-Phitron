#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<long long> pre(n + 1);
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + a[i - 1];
    }
    long long cnt = 0;
    map<long, long> mp;
    mp[0] = 1;
    for (int r = 1; r <= n; r++)
    {
        long long y = pre[r] - x; // prefix sum khujte hobe
        cnt += mp[y];             // valid sub array pawa gelo
        mp[pre[r]]++;             // bortoman prefix sum er frequency barano
    }
    cout << cnt << endl;
    return 0;
}