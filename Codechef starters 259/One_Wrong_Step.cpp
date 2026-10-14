#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int u=0,d=0,l=0,r=0;
        for(auto x:s){
            if(x=='U')
            u++;
            if (x == 'D')
                d++;
            if (x == 'R')
                r++;
            if (x == 'L')
                l++;
        }
    if(u==d && l>r){
        if(l-2==r){
        cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else if (u == d && l < r)
    {
        if (r - 2 == l)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }
    else if (l==r && u>d)
    {
        if (u - 2 == d)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;

        }
    }
    else if (l == r && u < d)
    {
        if (d - 2 == u)
        {
            cout << "YES"<<endl;
            
        }
        else
        {
            cout << "NO"<<endl;;
        
        }
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}