#include<bits/stdc++.h>
using namespace std;
int main()
{
    // set always sorted in asc and  unique
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
 
//     cout<<endl;
// auto it =s.find(6);//O(n)
// if(it != s.end())
// // cout<<"found"<<endl;
//        s.erase(6);//log n
//        for (auto val : s)
//        {
//            cout << val << " ";
//        }
//        cout<<endl;
//        cout<<s.count(6)<<endl;//O(logn)-> returns 0 if false
    //  int  m;
    //  cin>>m;
    //  auto it=s.lower_bound(m); // j value ta khujtesi tar theke immediate greater or equal value dive
    // if(it ==s.end())
    // cout<<"END"<<endl;
    // else
    //  cout<<*it<<endl;
    int m;
    cin >> m;
    auto it = s.upper_bound(m); // always immediate boro value dey .input set er value na dileo hobe
    if (it == s.end())
        cout << "END" << endl;
    else
        cout << *it << endl;

    return 0;
}