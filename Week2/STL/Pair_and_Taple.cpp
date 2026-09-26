#include<bits/stdc++.h>
using namespace std;
int main()
{

    // pair<string,int>student={"dablu",10};
    // student.first="bablu";
    // auto [name,roll]=student;
    // cout<<name<<" "<<roll<<endl;
    // int n;
    // cin>>n;
    // vector<pair<string,int>>student(n);
    // for(int i=0;i<n;i++){
    //     cin>>student[i].first>>student[i].second;
    // }
    // for(auto &p:student){
    // cout<<p.first<<" "<<p.second<<endl;
    // }

    // tuple <string,int ,string>//onek gulo element ekshathe combine kora jay
    // tuple<string,int ,string>t={"rahim",10,"0171"};
    // auto[name,roll,phone]=t;
    // cout<<name<<" "<<roll<<" "<<phone<<endl;
     pair<string,pair<int,string>>p={"dablu",{7,"0171"}};
    // for(auto &x:p){
    // cout<<p.first<<" "<<p.second<<endl;
    // }
    string name=p.first;
    int roll=p.second.first;
    string phone=p.second.second;
    cout<<name<<" "<<roll<<" "<<phone<<endl;
    return 0;
}
