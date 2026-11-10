#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--){
        int n;cin>>n;
        string s;
        cin>>s;
        int ans=2e5;
        for(char c='a';c<='z';c++){
            int l=0,r=n-1;
            int cnt=0;
            bool flag =true;
            while(l<r){
        if(s[l]==s[r]){
            l++,r--;
        }
        else{
            if(s[l]==c){
                l++,cnt++;
            }
            else if(s[r]==c){
                r--,cnt++;
            }
            else{
                flag=false;
                break;
            }
        }
    }
     
     if (flag)
         ans = min(ans, cnt);
    }
    if(ans==(int)2e5)
    cout<<-1<<endl;
    else{
        cout<<ans<<endl;
    }
}
    return 0;
}