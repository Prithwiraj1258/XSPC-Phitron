#include<bits/stdc++.h>
using namespace std;
int main()
{
    //sorted but duplicate allowed
    int n;
    cin >> n;
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    // for (auto val : s)
    //            {
    //                cout << val << " ";
    //            }
    //            cout<<endl;

    //            auto it = s.find(6); // O(n)
    //            if(it != s.end())
    //             cout<<"found"<<endl;

    s.erase(6); //O(logn)  O(logn+k)K=elements  multiple bar thakle tar songkha
        for (auto val : s)
                   {
                       cout << val << " ";
                   }
                   cout<<endl;
        auto it =s.find(9);
        s.erase(it);//O(logn)
         for (auto val : s)
                   {
                       cout << val << " ";
                   }
                   cout<<s.count(9)<<endl;
        return 0;
}