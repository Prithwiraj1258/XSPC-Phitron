#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    deque<int>dq(n);
    for(int i=0;i<n;i++){
        cin>>dq[i];
    }
    dq.push_front(8);
    dq.push_front(2);
    for(auto val : dq){
        cout<<val<<" ";
    }
    cout<<endl;
    dq.pop_front();
    for (auto val : dq)
    {
        cout << val << " ";
    }
    cout<<endl;
    //push_back(),pop_back(),back()
    //push_front(),pop_front(),front()
    return 0;
}