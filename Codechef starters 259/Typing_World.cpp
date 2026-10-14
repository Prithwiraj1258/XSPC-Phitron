#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        int l=0,r=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(b.find(a[i]) != -1){
                l++;
                r=0;
            }
            else{
                r++;
                l=0;
            }
            ans = max(ans, l);
            ans = max(ans, r);
        }
     cout<<ans<<endl;
    }
    return 0;
}