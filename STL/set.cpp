#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  //1.sorted 2.unique value 
  int n;cin>>n; 
  set<int>st;

  //1.insert--logN 
  while(n--){
    int x;cin>>x;
    st.insert(x);
  } 

  //2. travers-1(range based)
  for(auto value:st){ //value iterator noi.
    cout<<value<<" ";
  }
  cout<<endl;
  // travers-2(iterator)
    //   for(auto it=st.begin();it!=st.end();it++){
    //     cout<<*it<<" ";
    //   }


  //3.find()--logN-->iterator return kore .
    int y;cin>>y;
   
    //   auto it=st.find(y);
    //   if(it!=st.end())cout<<"Found"<<endl;
    //   else cout<<"Not Found"<<endl;

    //4.count()--logN--value koibar ache ta retunr kore.jeheto set e unique value tai value na thakle 0 and thakle 1 return kore


    // int found=st.count(y);
    // cout<<found<<endl;

    //5.erase()--logN-->before erase check whether value exist or not.

    // if(st.count(y))st.erase(y);
    // else cout<<"Not Found"<<endl;
    // for(auto value:st){ 
    //     cout<<value<<" ";
    // }
    // cout<<endl;

    //6.lower_bound()--log(N)-->return an iterator to the first element that is exactly y or immediate greater value than y

    // auto it =st.lower_bound(y);
    // if(it!=st.end())cout<<*it<<endl;

    //7.upper_bound()--log(N)-->return an iterator to the first element that is strictly immediate  greater value than y

    // auto it =st.upper_bound(y);
    // if(it!=st.end())cout<<*it<<endl;

    //8.size()-O(1)
    //9.empty()-O(1)
    //10.clear()--(N)


  return 0;
}