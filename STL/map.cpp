#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  map<int,int>mp;
  
  //insert ->O(logN)
  mp[9]=20;
  mp[2]=30;
  mp[4]=40;
  mp[3]=50;

  //travers
//   for(auto [key,value]:mp){
//     cout<<key<<":"<<value<<endl;
//   }

    for(auto it:mp){     
        int key=it.first, value=it.second;
        cout<<key<<':'<<value<<endl;

    }
    cout<<endl;

//     এখানে it হলো pair, iterator না!
// কারণ range-based for loop map-এর প্রতিটা element কে directly copy করে pair আকারে দেয়।
// অর্থাৎ, এখানে iterator না, বরং প্রতিবারে it = pair<const Key, Value>


    //find -->O(logN)

    // auto it=mp.find(9); //iterator return kore.
    // if(it==mp.end()){
    //     cout<<"key not found"<<endl;
    // }else{
    //     int key=it->first;
    //     int value=it->second;
    //     cout<<key<<':'<<value<<endl;
    // }

    // cout<<mp[9]<<endl; //value return korbe 
    // cout<<mp[25]<<endl; // value jodi na thake ei key ta add korbe and value hobe 0.
    // for(auto it:mp){ 
    //     int key=it.first, value=it.second;
    //     cout<<key<<':'<<value<<endl;

    // }

    //erase ->O(logN)
    // mp.erase(9);   //key thakle erase kore dibe.
    // auto it=mp.find(10);
    // if(it!=mp.end()){
    //     mp.erase(it);
    // }else{
    //     cout<<"key not found"<<endl;
    // }



    // cout<<mp.size()<<endl; complexity-->O(1)
    // mp.clear();  complexity-->O(N)
    // cout<<mp.empty()<<endl; //return 0 or 1; complexity-->O(1)
    // auto it=mp.begin();  complexity-->O(1)
    // cout<<it->first<<" "<<it->second<<endl;
    // auto  it =mp.rbegin();  // laster ager iterator. complexity-->O(1)
    // cout<<it->first<<" "<<it->second<<endl;


    // upper_bound lower_bound

    // mp[6]=25;
    // // auto it=mp.lower_bound(6);  // get an iterator to the first element which is greater or equalt to 6.If no such element exists (i.e. all keys are < key), then it returns map.end().  -->O(logN).
    // // cout<<it->first<<" "<<it->second<<endl;

    // auto it=mp.upper_bound(6); //get an iterator to the first element which is strictly greater than 6.If no such element exists (i.e., all keys are ≤ key), then it returns map.end().  -->O(logN). 
    // cout<<it->first<<" "<<it->second<<endl;

  return 0;
}

//1.key value pair e thake
//2.key unique thake
//3.key diye sorted thake