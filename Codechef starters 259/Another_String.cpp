#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            if(a[i]=='1')
            cnt1++;
            if (b[i]=='1')
            cnt2++;
        }
        // cout<<cnt1<< " "<<cnt2<<endl;
       if(cnt1%2 !=0 && cnt2%2==0)
       cout<<"NO"<<endl;
       else if (cnt1 % 2 == 0 && cnt2 % 2 != 0)
           cout << "NO" << endl;
       else
       cout<<"YES"<<endl;
    }
    return 0;
}