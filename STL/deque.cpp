#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;cin>>n;
  deque<int>dq;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    dq.push_back(x);
  }
  for(int i=0;i<n;i++){
   
    cout<<dq[i]<<" ";
  }
  cout<<endl;

  dq.push_front(6);
  dq.push_front(7);

  for(auto val:dq){
    cout<<val<<" ";
  }
  dq.pop_front();
  dq.pop_front();

  cout<<endl;
   for(auto val:dq){
    cout<<val<<" ";
  }
  sort(dq.begin(),dq.end());
  cout<<endl;
   for(auto val:dq){
    cout<<val<<" ";
  }

   
  return 0;
}


// as same as vector
// front operation kora jai O(1) e jeita vector e kora jaina
// but drawbakcs --> compared to vector ,double memory use hoi.