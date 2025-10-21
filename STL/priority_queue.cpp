#include<bits/stdc++.h>
using namespace std;
int main()
{
  
    int n;cin>>n;
    priority_queue<int>pq; //by default max heap(non-increasing -->means descending but allow dupplicates )
  
    //    priority_queue<int,vector<int>,greater<int>>pq; //min heap(non-decreasing--> means ascending but allow duplicates). vector and greater function er data type hbe priority_queue er data type.

   while(n--){
    int x;cin>>x;
    pq.push(x);
   }

  //travers
  while(!pq.empty()){
    int value=pq.top();
    cout<<value<<endl;
    pq.pop();
  }

  return 0;
}