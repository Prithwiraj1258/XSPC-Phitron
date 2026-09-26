#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    set<char>st;
    string s2="abcdefghijklmnopqrstuvwxyz";
    for(char c:s){
        st.insert(c);
    }
    string s3;
   
    for(char c:s2){
        bool found = false;
        for (char x : st)
        {
            if (c == x)
            {
                found = true;
                break;
            }
        }
        if (!found)
        s3.push_back(c);
        }
        if(s3.size()==0)
        cout<<"None";
        else{
        sort(s3.begin(),s3.end());
        cout<<s3[0];
        }

    return 0;
}