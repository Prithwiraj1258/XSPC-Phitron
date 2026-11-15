#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;cin>>s;
        int l=s[0],r=s[n-1];
        int cnt=0;
        while(r>=0){
            if(s[l]==s[r]){
                l++,r--;
            }
            if(s[l]>s[r]){
                s[l]=s[l]-'a';
            }
        }
    }
    
    return 0;
}