#include<bits/stdc++.h>
using namespace std;
int main()
{
 
        int n;
        cin>>n;
        set<pair<int,int>>s;
        multiset<pair<int,int>>ml;
        vector<int>ans;
        for(int i=0;i<=n;i++){
            int type;
            cin>>type;
            
            
            if(type==1){
                int money;
                cin>>money;
                s.insert({i, money}); // i er serial e sort korbe
                ml.insert({money, -i}); // reverse biased korar jonno -i kora hocche

            }
            else if(type ==2){
                int pos =-ml.rbegin()->second,money=ml.begin()->first;
                ans.push_back(pos);
                ml
            }
        }
        

    
    
    return 0;
}