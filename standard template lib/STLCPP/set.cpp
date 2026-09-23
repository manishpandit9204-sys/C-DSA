#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 // set<int>s;

  // jb hume set ke element ko decending order me print karna hoga toh greater use karnge
 // set<int,greater<int>>s;
  // s.insert(109);
  // s.insert(12);
  // s.insert(14);
  // s.insert(11);
  // s.insert(11);
  // s.insert(100);
  // s.insert(114);
  // s.insert(124);
  // s.insert(154);
  // s.insert(194);
  // s.insert(104);

  // for(auto it=s.begin();it!=s.end();it++)
  //  {
  //   cout<<*it<<" ";
  //  }


  // Reverse Order
  //  for(auto it=s.rbegin();it!=s.rend();it++)
  //  {
  //   cout<<*it<<" ";
  //  }

  // Method 1-> Search / find the element in set

  // if(s.find(104)!=s.end())
  // {
  //   cout<<"Present";
  // }
  // else
  // {
  //   cout<<"Absent";
  // }

  // Method 2 -> find the element

  // cout<<s.count(1004)<<" ";

  //Implement class element to the help of set

 
//    class Person{
//     public:
//     int age;
//     string name;
    
//      bool operator<(const Person & other) const{
//       return name <other.name;
//      }

//    };
//  int main(){

//    set <Person>s;

//    Person p1,p2,p3;
//    p1.age=10,p1.name="Aanish";
//    p2.age=30,p2.name="Sunil";
//    p3.age=40,p3.name="Dyneil";
//    s.insert(p1);
//    s.insert(p2);
//    s.insert(p3);

//    for(auto it=s.begin();it!=s.end();it++)
//    {
//     cout<<it->age<<" "<<it->name<<endl;
//    }
 //}



int main()
{
  //unordered_set<int>s;
  // if we want to print including dublicate Element
  unordered_multiset<int>s;
  s.insert(109);
  s.insert(12);
  s.insert(14);
  s.insert(11);
  s.insert(11);
  s.insert(100);
  s.insert(114);
  s.insert(114);
  s.insert(154);
  s.insert(194);
  s.insert(104);

  for(auto it=s.begin();it!=s.end();it++)
  {
    cout<< *it<<" ";
  }
}


