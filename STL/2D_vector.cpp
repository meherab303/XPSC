#include<bits/stdc++.h>
using namespace std;
int main()
{
  //1 way

//   int r,c;
//   cin>>r>>c;
//   vector<vector<int>>v(r,vector<int>(c,5)); //fixed size

  
//   for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//         cout<<v[i][j]<<" ";
//     }
//     cout<<endl;
//   }

  //2

//   int r,c;
//   cin>>r>>c;
//   vector<vector<int>>v(r,vector<int>(c)); //fixed size

  
//   for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//         cin>>v[i][j];
//     } 
//   }
//   for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//         cout<<v[i][j]<<" ";
//     }
//     cout<<endl;
//   }

  //3 dynamic  way

//   int r;cin>>r;
//   vector<vector<int>>v; //dynamic 2d vector

//   for(int i=0;i<r;i++){
//     int m;cin>>m;
//     vector<int>v1(m);
//     for(int j=0;j<m;j++){
//         cin>>v1[j];
//     }
//     v.push_back(v1);
//   }
//   for(int i=0;i<r;i++){
//     for(int j=0;j<v[i].size();j++){
//         cout<<v[i][j]<<" ";
//     }
//     cout<<endl;
//   }


//4 dynamic  
// int r;cin>>r;
// vector<vector<int>>v;
// for(int i=0;i<r;i++){
//     int m;cin>>m;
//     vector<int>v1;
//     for(int j=0;j<m;j++){
//         int x;cin>>x;
//         v1.push_back(x);
//     }
//     v.push_back(v1);
// }

// for(int i=0;i<r;i++){
//     for(int j=0;j<v[i].size();j++){
//         cout<<v[i][j]<<" ";
//     }
//     cout<<endl;
//   }


  //string in vector as 2D vector

  int n;cin>>n;
 vector<string>v2;

 for(int i=0;i<n;i++){
    string s;
    cin>>s;
    v2.push_back(s);
 }

 for(int i=0;i<n;i++){
    for(int j=0;j<v2[i].size();j++){
        cout<<v2[i][j]<<" ";
    }
    cout<<endl;
  }
 

  return 0;
}