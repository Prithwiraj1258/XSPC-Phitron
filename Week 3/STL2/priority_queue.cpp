#include<bits/stdc++.h>
using namespace std;
int main()
{
    //priority queue sorted 

    priority_queue<int,vector<int>,greater<int>>pq;//non decreasing order
    pq.push(5);
    pq.push(2);
    pq.push(1);
    pq.push(3);
    pq.push(4);
   
    cout<<pq.top()<<endl; //O(1)
    pq.pop();
    cout<<pq.top()<<endl;//O(1)
  
    cout<<"Size->"<<pq.size()<<endl;
    cout<<pq.empty()<<endl;
    while(!pq.empty()){
        int val=pq.top();
        pq.pop();
        cout<<val<<" ";
    }
    return 0;
}