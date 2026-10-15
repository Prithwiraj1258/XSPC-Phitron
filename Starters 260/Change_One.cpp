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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int mn = INT16_MAX;
        if(n==2)
        cout<<0<<endl;
       
        else{
            for(int i=0;i<n-1;i++){
                mn=min(mn,(v[i+1]-v[i]));
            }
            cout << mn << endl;
        }
      
    }
    
    return 0;
}