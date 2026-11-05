#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n);
        int o=0;int e=0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];       
        }
        for (int i = 0; i < n; i++)
        {
            if(v[i]%2==0)
            e++;
            else 
            o++;
        }
          int idx=-1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                idx = i;
                break;
            }
        }
        int ans=0,ans2=0;;
        int cnt=0,cnt2=0;
        if (o%2==0){
        cout<<n<<endl;
        }
        else if(o%2!=0 && e==0){
            cout<<n-1<<endl;
        }
        


        else if (o % 2 != 0 && e>0){
            for (int i = idx; i < n; i++)
            {
                if (v[i] % 2 == 0)
                {
                    cnt++;
                }
                else{
                   cnt=0;
                   idx=i;
                }
                ans = max(ans, cnt);
            }
                for (int i = idx; i < n; i++)
                {
                    if (v[i] % 2 != 0)
                    {
                        cnt2++;
                    }
                    else
                    {
                        cnt2 = 0;
                        break;
                    }
                    ans2 = max(ans2, cnt2);
                }
      if(ans2%2==0){
         cout<<max(ans,ans2)<<endl;;
      }
      else{
        cout<<ans<<endl;
      }
        }
       
    }
    return 0;
}