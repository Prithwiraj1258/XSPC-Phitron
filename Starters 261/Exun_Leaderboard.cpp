#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int x,y;
    cin>>x>>y;
    if(x>y)
    cout<<abs(x-y-1)<<endl;
    else
    cout<<abs(y-x-1)<<endl;

    return 0;
}