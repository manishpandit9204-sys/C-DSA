#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  // here there are two key in pair
  //pair<string,int>p;
  // first method to insert
  //p= make_pair("manish",21);

  // second method to insert
   // p.first ="Manish";
   // p.second=22;

  //cout<<p.first<<" "<<p.second<<endl;

  // BUT I WANT TO MORE THAN TWO KEYS

  pair<pair<string,string>,int>p;
  pair<string,pair<string,int>>p1;

  // insert

  // p= make_pair("MANISH",make_pair("KUMAR",34));
   p1= make_pair("MANISH",make_pair("PANDIT",34));
  // p.first="Manish";
  // p.second.first="Pandit";
  // p.second.second=23;


   cout<<p1.first<<" "<< p1.second.first<<" "<<p1.second.second<<endl;
}