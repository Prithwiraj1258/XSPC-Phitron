#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        
        int cnt=0;
    for(int i=0;i<n;i+=k){
        bool z=false;
        for(int j=i;j<i+k;j++){
            if(s[j]=='0'){
                z=true;
                break;
            }
        }
        if(!z){
            cnt++;
        }
        }
    
    cout<<cnt<<endl;
    }
    return 0;
}