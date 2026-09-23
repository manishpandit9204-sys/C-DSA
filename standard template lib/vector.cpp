#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>v;
    // v.push_back(10);
    // v.push_back(12);
    // v.push_back(13);
    // v.push_back(14);
    // cout<<v.size()<<endl;
    // v.pop_back();
    // cout<<v.size()<<endl;
    // cout<<v[1]<<endl;
    // cout<<v.at(1)<<endl;
    // cout<<v.front()<<endl;
    // cout<< v.back()<<endl;
    // cout<<v.capacity()<<endl;
    // v.push_back(12);
    // v.push_back(4);
    // cout<<v.capacity()<<endl;
    // cout<<v.max_size()<<endl;

    // v.erase(v.begin(),v.end());
    // cout<<v.size()<<endl;

    // v.insert(v.begin(),99);
    // cout<<v.at(0)<<endl;


    // swap in vector

    // vector<int>first;
    // vector<int>second;

    // first.push_back(10);
    // first.push_back(20);
    // first.push_back(30);
    // first.push_back(40);

    //  second.push_back(56);
    //  second.push_back(57);
    //  second.push_back(58);
    //  second.push_back(59);


    //  first.swap(second);
    //  for(int i:first)
    //  cout<<i<<" ";
    // cout<<endl;
    //  for(int i: second)
    //  cout<<i<<" ";


    // ITERATOR ON VECTOR
     
    vector<int>first;

    first.push_back(23);
    first.push_back(27);
    first.push_back(20);
    first.push_back(26);
    first.push_back(25);

    vector<int>:: iterator it = first.begin();

    while(it != first.end()){
    cout<<*it<<" ";
    it++;
    }
 return 0;


}
