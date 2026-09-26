#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=n;
    int cnt=0;
    while(n !=0){
        n=n/10;
        cnt++;
    }
    for(int i=0;i<4-cnt;i++)
    cout<<0;

    cout<<m;
    
    return 0;
}