#include<bits/stdc++.h>
using namespace std;
int main()
{
int tc=1;
cin>>tc;
while(tc--){
    int n;
    cin>>n;
    vector<pair<int ,int>>a(n);
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i;
        if(a[i].first==0) cnt++;
    }
    sort(a.begin(),a.end());
    if(cnt==0){
        cout<<"YES"<<endl;
        string s(n, 'A'); // n length-এর string বানাচ্ছে এবং sob value A
        cout<<s<<endl;
        continue;
    }
    if(cnt==1){
        cout<<"NO"<<endl;
        continue;
    }
    cout<<"YES"<<endl;
    string s(n,' ');//n length-এর string বানাচ্ছে এবং শুরুতে সব জায়গায় space।
    s[a[0].second]='A'; //1st zero
    s[a[1].second] = 'B';//2nd 0
    
    for(int i=2;i<n;i++){
        if(a[i].first==0)
        s[a[i].second]='A';
        else s[a[i].second]='C';
    }
    cout<<s<<endl;
}
    
    return 0;
}