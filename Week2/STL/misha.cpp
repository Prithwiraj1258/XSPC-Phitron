#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,string>ans,has;//2 ta map
    for(int i=0;i<n;i++){
        string a,b;
        cin>>a>>b;
        if(has.find(a)!= has.end()){//jodi existed 
            string s=has[a];
            ans[s]=b; 
            has.erase(a);
            has[b]=s;
        }
        else{
        ans[a]=b;
        has[b]=a;
    }
}
cout<<ans.size()<<endl;
for (auto value : ans)
{
    cout << value.first << " " << value.second << endl;
}

    return 0;
}