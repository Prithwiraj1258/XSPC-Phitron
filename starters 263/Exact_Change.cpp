#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=5){
        cout<<(n/5)+n%5<<endl;
    }
    else{
        cout<<n<<endl;
    }
    
    return 0;
}