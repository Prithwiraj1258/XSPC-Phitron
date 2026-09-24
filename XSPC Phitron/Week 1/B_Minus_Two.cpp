#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int>v(n);
      for (int i = 0; i < n; i++)
      {
        cin>>v[i];
      }
          int cnt1 = 0, cnt21 = 0, cnt22 = 0;
          for (int i = 0; i < n; i++)
          {
              if (v[i] % 2 != 0)
                  cnt1++;
              else if (v[i] % 2 == 0 && (v[i] / 2) % 2 != 0)
                  cnt21++;
              else if (v[i] % 2 == 0 && (v[i] / 2) % 2 == 0)
                  cnt22++;
          }
         
          cout << max({cnt1, cnt21, cnt22}) << endl;
      }
    return 0;
}