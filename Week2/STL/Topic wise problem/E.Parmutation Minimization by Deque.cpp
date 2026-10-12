#include<bits/stdc++.h>
using namespace std;
int main()
{
       int t;
       cin >>t;
       while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        deque<int>q;
        q.push_back(v[0]);
        for(int i=1;i<n;i++){
            if(v[i]<=q.front()){
                q.push_front(v[i]);
            }
            else{
                q.push_back(v[i]);
            }
            }
            for(int i=0;i<n;i++){
                cout<<q[i]<<" ";
            }
            cout<<endl;
        }                                                                                                                 
    
    return 0;
}