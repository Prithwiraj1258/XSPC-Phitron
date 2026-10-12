#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string q,s;
        cin>>q;
        set<char>s1;
       
        for (int i = 0; i < n; i++){
        s1.insert(q[i]);
        }
  for(char x:s1){
    s.push_back(x);
  }
      for(auto x:q){
        int id=s.find(x);
        cout<<s[s.size()-id-1];
      }
      cout<<endl;
    }
    
    return 0;
}