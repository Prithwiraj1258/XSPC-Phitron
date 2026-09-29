#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    mp[10]=20;
    mp[2]=15;
    mp[10]=12;
    mp[5]=18;
    mp[6]=48;
    // mp.insert({10,20});
    // mp.insert({2, 12});
    // for(auto it:mp){
    //     int key=it.first,value=it.second;
    //     cout<<key<<"->"<<value<<endl;
    // }
    // auto it=mp.find(20);
    
    // if(it==mp.end()){
    //     cout<<"Key not found";
    // }
    // else
    //     cout << it->first << " " << it->second << endl;
   
    // auto it=mp.find(10);
    //     if(it!=mp.end()){
    //         mp.erase(it); // key diye erase korte hobe
    //     }
        for (auto it : mp)
        {
                int key=it.first,value=it.second;
                cout<<key<<"->"<<value<<endl;
            }

        auto it=mp.lower_bound(6);//immidiate boro key er value dibe jodi key na thake
        cout<<it->first<<" "<<it->second<<endl;
        auto it = mp.upper_bound(9); //always boro key er value ta dey
        cout << it->first << " " << it->second << endl;
        return 0;
        }