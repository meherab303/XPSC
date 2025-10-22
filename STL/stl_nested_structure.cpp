#include<bits/stdc++.h>
using namespace std;
int main()
{
  
    map<int,set<int>>mp;
    set<int>s1;
    set<int>s2;
    set<int>s3;


    s1.insert(1);
    s1.insert(2);
    s1.insert(3);

    
    s2.insert(4);
    s2.insert(6);
    s2.insert(7);

    
    s3.insert(8);
    s3.insert(9);
    s3.insert(10);
    

    mp[5]=s1;
    mp[10]=s2;
    mp[15]=s3;

    for(auto [key,value]:mp){
        cout<<key<<"--> ";
        for(auto val :value){
            cout<<val<<" ";
        }
        cout<<endl;
    }

    int x=7,y=5;

    map<int,set<int>>::iterator lb1=mp.lower_bound(x); //map<int,set<int>>::iterator lb1 (auto lb1 ) --> ei iterator map er ekta element ke point kore ache. lb1==>{10,{4,6,7}}.

    if(lb1!=mp.end()){
        //way-1

        // pair<int,set<int>> p=*lb1; // lb1-->{10,{4,6,7}}.(*lb1)=10,{4,6,7}.

        // cout<<p.first<<endl;

        // auto lb2=p.second.lower_bound(y);
        // if(lb2!=p.second.end()){
        //      cout<<*lb2<<endl;
        // }else{
        //     cout<<"not found"<<endl;
        // }

        //way-2 is different syntax of way-1

        int key=lb1->first;  //(*lb1).first =ek e jinish .
        cout<<key<<" ";

        auto lb2=lb1->second.lower_bound(y);
        //  auto lb2=mp[key].lower_bound(y);  //2tai same

        if(lb2!=lb1->second.end()){
             cout<<*lb2<<endl;
        }else{
            cout<<"not found"<<endl;
        }

       
        
    }else{
        cout<<"Not Found"<<endl;
    }




   
  return 0;
}