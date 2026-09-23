#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  // map<int,int>m;
  // m.insert(make_pair(20,30));
  // m.insert(make_pair(30,130));
  // m.insert(make_pair(40,230));
  // m.insert(make_pair(50,330));
  // m.insert(make_pair(20,430));
  // m.insert(make_pair(90,530));

  // for use of this following to create map and and update the value in map
  //m[100]=70;
  // Update the value  kyuki iski priority jyada hoti hai 
  //m[20]=77;

  // for(auto it=m.begin();it!=m.end();it++)
  // {
  //   cout<<it->first<<" "<<it->second<<endl;
  // }


  // Unordered Map

  unordered_map<int,int>m;
  m.insert(make_pair(20,30));
  m.insert(make_pair(30,130));
  m.insert(make_pair(40,230));
  m.insert(make_pair(50,330));
  m.insert(make_pair(20,430));
  m.insert(make_pair(90,530));

  for(auto it=m.begin();it!=m.end();it++)
  {
    cout<<it->first<<" "<<it->second<<" "<<endl;
  }
}