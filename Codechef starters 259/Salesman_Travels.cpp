#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> even,odd;
        for(int i=1;i<=n;i++){
            if(i%2==0)
            even.push_back(i);
            else{
                odd.push_back(i);
            }
        }
        reverse(odd.begin(),odd.end()); 
        reverse(even.begin(), even.end());
        for (int x : odd)
            cout << x << " ";

        for (int x : even)
            cout << x << " ";

        cout << endl;
    }
    
    return 0;
}