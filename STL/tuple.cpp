#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  ios::sync_with_stdio(false);
  cin.tie(nullptr) ;


  tuple<string,int,string,string>student_info={"fahim",05,"015","mirpur"};

  // cout<<get<0>(student_info)<<" "<<get<1>(student_info)<<" "<<get<2>(student_info)<<" "<<get<3>(student_info)<<endl;

  auto [name,roll,phone,address]=student_info;
  cout<<name<<" "<<roll<<" "<<phone<<" "<<address<<endl;

  return 0;
}