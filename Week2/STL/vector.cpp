#include<bits/stdc++.h>
using namespace std;
int main()
{
        // int n;
        // cin >> n;

        // vector<int> v(n);

        // for (int i = 0; i < n; i++)
        // {
        //     cin >> v[i];
        // }

        // cout << v.size() << endl;

        // v.pop_back();

        // cout << v.size() << endl;

        // cout << v.front() << endl;
        // cout << v.back() << endl;
        // cout << v.empty() << endl;
        // vector<int>v;
        // v.assign(n,5);
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<v[i]<<" ";
        // }

        // vector<int> v;
        // v.resize(4);
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cin >> v[i];
        // }
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout<< v[i]<<" ";
        // }
        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout<< v[i]<<" ";
        // }
        // cout<<endl;
        // for(auto it=v.begin();it!=v.end();it++)
        // cout<<*it<<" ";
        // auto lastElement=v.end();
        // lastElement--;

        // cout<<*lastElement<<endl;//gives last element
        // reverse(v.begin(),v.end());
        // sort(v.rbegin(),v.rend());//decending
        for(auto val:v){
            cout<<val<<" ";
        }
        cout<<endl;
        auto mn=min_element(v.begin(),v.end());
         cout<<*mn<<endl;
         auto mx = max_element(v.begin(), v.end());
         cout << *mx<<endl;
        int maxElementPosition = mx-v.begin();
        cout<<maxElementPosition<<endl;
         return 0;
}