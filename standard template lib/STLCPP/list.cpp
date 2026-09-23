#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<int> l;
  l.push_back(20);
  l.push_back(30);
  l.push_back(40);
  l.push_back(50);
  l.push_back(60);
  l.push_back(70);
  l.push_front(10);

  // cout<<l.front()<<" "<<l.back()<<" "<<l.size()<<endl;

  // Print All the Element of List

  // for(auto it=l.begin(); it!=l.end();it++)
  // {
  //   cout<<*it<<" ";
  // }

  // Print the List Element in Reverse Order
  for (auto it = l.rbegin(); it != l.rend(); it++)
  {
    cout << *it << " ";
  }
}