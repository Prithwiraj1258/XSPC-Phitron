#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>v(n),a(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        a[0]=v[0];
        for(int i=1;i<n;i++){
            a[i]=a[i-1]+v[i];
        }
        int cnt=0;
       for(auto x:a){
        if((x*(x-1))/2 <=m)
        cnt++;
        else{
            break;
        }
       }
        cout<<cnt<<endl;
    }
    return 0;
} 