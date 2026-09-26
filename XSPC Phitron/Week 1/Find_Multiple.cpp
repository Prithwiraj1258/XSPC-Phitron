#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int flag=0;
    for(int i=a;i<=b;i++){
        if(i%c==0)
        flag=1;
    }
    if(flag==1){
        for (int i = a; i <= b; i++)
        {
            if (i % c == 0){
                cout<<i;
                break;
            }
        }
    }
    else{
        cout<<-1;
    }

    
    return 0;
}