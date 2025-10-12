#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  ios::sync_with_stdio(false);
  cin.tie(nullptr) ;

  pair<string,int>student={"karim",10};
  cout<<student.first<<" "<<student.second<<endl;

    // auto [name,roll]=student;
    // cout<<name<<" "<<roll<<endl;

    int n;cin>>n;
    pair<string,int>students[n];
    for(int i=0;i<n;i++){
        cin>>students[i].first>>students[i].second;
    }

    for(auto [name ,roll]:students){
        cout<<name<<" "<<roll<<endl;
    }

    pair<string,pair<int,int>>students2={"nahin",{10,911}};

    cout<<students2.first<<" "<<students2.second.first<<" "<<students2.second.second<<endl;


  return 0;
}