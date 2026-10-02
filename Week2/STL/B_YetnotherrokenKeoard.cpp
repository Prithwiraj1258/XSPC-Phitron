#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, ans = "";

        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                for (int j = ans.size() - 1; j >= 0; j--)
                {
                    if (ans[j] >= 'A' && ans[j] <= 'Z')
                    {
                        ans.erase(j, 1);
                        break;
                    }
                }
            }
            else if (s[i] == 'b')
            {
                for (int j = ans.size() - 1; j >= 0; j--)
                {
                    if (ans[j] >= 'a' && ans[j] <= 'z')
                    {
                        ans.erase(j, 1);
                        break;
                    }
                }
            }
            else
            {
                ans += s[i];
            }
        }

        cout << ans << '\n';
    }

    return 0;
}