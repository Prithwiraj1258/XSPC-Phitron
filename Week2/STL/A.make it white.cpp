#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int fp=-1, lp=-1;
        fp=s.find('B');//index
        lp=s.rfind('B');//reverse dik diye index
        int ans= lp-fp+1;//number of totol charecter in suvstring
        cout<<ans<<endl;
    }
    
    return 0;
}