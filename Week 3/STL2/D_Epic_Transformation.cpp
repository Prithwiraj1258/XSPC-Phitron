#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>cnt;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            cnt[x]++;
        }
        priority_queue<int>pq;
        for(auto [x,y]:cnt){
            pq.push(y);
        }
        while(!pq.empty()){
            int x,y;
            x=pq.top();
            pq.pop();
            y=pq.top();
            pq.pop();
            x--;
            y--;
            if(x>=0)
            pq.push(x);

            if(y==0)
            pq.push(y);
        }
    }
    
    return 0;
}