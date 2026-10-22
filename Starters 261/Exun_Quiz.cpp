#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int cnt1 = 0, cnt2 = 0;

        int n,m;
        cin>>n>>m;
        if((m%(4*n))<4){
        cout<<-1<<endl;
        }
        else if(m==0){
        cout<<0<<endl;
        }
        else{
            for(int i=1;i<n;i++){
                if(i*4<m)
                cnt1++;
                else{
                    cnt2=i*4-m;
                }
            }
        }
        cout<<cnt1+cnt2+1<<endl;

    }
    
    return 0;
}