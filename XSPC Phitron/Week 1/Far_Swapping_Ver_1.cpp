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
    for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
            //Buble sort
            if(v[j-1]>v[j] && (v[j-1]-v[j])>1)
            swap(v[j],v[j-1]);
         }   
        }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
    return 0;
}