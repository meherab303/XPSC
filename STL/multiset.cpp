#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  //1.sorted 2.but not unique value 

  int n;cin>>n; 
  multiset<int>mst;

  //1.insert--logN 
  while(n--){
    int x;cin>>x;
    mst.insert(x);
  } 

  //2. travers-1(range based)
  for(auto value:mst){ //value iterator noi.
    cout<<value<<" ";
  }
  cout<<endl;
  // travers-2(iterator)
    //   for(auto it=mst.begin();it!=mst.end();it++){
    //     cout<<*it<<" ";
    //   }


  //3.find()--logN-->iterator return kore .
    int y;cin>>y;
   
    //   auto it=mst.find(y);
    //   if(it!=mst.end())cout<<"Found"<<endl;
    //   else cout<<"Not Found"<<endl;

    //4.count()--(logN+K)-->eikhane k holo jotobar y ache-->value koibar ache ta retunr kore.


    // int found=mst.count(y);
    // cout<<found<<endl;

    //5.1.erase() by value-->(logN+K)-->eikhane k holo jotobar y ache -->before erase check whether value exist or not.

    // if(mst.find(y)!=mst.end())mst.erase(y); // value diye erase korle same value jotota ache delete hoye jabe.
    // else cout<<"Not Found"<<endl;

    // for(auto value:mst){ 
    //     cout<<value<<" ";
    // }
    // cout<<endl;


    //5.2-erase() by iterator--->(logN+logN) or 2 logN
    // auto it =mst.find(y);
    // if(it!=mst.end())mst.erase(it); //iterator diye delete korle ekta value delete hobe.karon iterator ekta loc.tai shudu oi loc er value tai erase hobe.
    // else cout<<"Not Found"<<endl;
    // for(auto value:mst){ 
    //     cout<<value<<" ";
    // }
    // cout<<endl;


    //6.lower_bound()-->log(N)-->return an iterator to the first element that is exactly y or immediate greater value than y

    // auto it =mst.lower_bound(y);
    // if(it!=mst.end())cout<<*it<<endl;

    //7.upper_bound()--->log(N)-->return an iterator to the first element that is strictly immediate  greater value than y

    // auto it =mst.upper_bound(y);
    // if(it!=mst.end())cout<<*it<<endl;

    //8.size()-O(1)
    //9.empty()-O(1)
    //10.clear()--(N)


  return 0;
}