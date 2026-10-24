#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    multiset<int> ml;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ml.insert(x);
    }
    int ans=0,pb=1;
    while(!ml.empty()){
        auto lb=ml.lower_bound(pb);
        if(lb != ml.end())
        {
            ans++;
            ml.erase(lb);
        }
        else{
            break;
        }
       pb++;
    }
    cout<<ans<<endl;


    return 0;
}