#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s,s2;
   cin>>s;
   cin>>s2;
   int cnt=0;
   for(int i=0;i<s.size();i++)
   {
    if(s[i]!=s2[i])
    cnt++;
   }
    cout<<cnt<<endl;
    return 0;
}