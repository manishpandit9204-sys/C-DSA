#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 int main(){
// create vector
/*vector<int>v;
vector<int>v1(5,1);
// size and capacity of vector
cout<<"Size of vector:"<<v.size()<<endl;
cout<<"Capacity of vector:"<<v.capacity()<<endl;
v.push_back(1);
v.push_back(9);
v.push_back(7);
cout<<"Size of  vector :"<<v.size()<<endl;
cout<<"Capacity of vector :"<<v.capacity()<<endl;
//update value in vector
v[1]=5;
cout<<"Size of  vector 1:"<<v1.size()<<endl;
cout<<"Capacity of vector 1:"<<v1.capacity()<<endl;*/
// delete value from vector 
 /*vector<int>vnew;
 vnew.push_back(4);
 vnew.push_back(41);
 vnew.push_back(14);
 vnew.push_back(42);
 vnew.push_back(84);
 cout<<"Size of vector:"<<vnew.size()<<endl;
cout<<"Capacity of vector:"<<vnew.capacity()<<endl;
 vnew.pop_back();
 cout<<"Size of vector:"<<vnew.size()<<endl;
cout<<"Capacity of vector:"<<vnew.capacity()<<endl;
//erase
 vnew.erase( vnew.begin() +1 );
cout<<"Size of vector:"<<vnew.size()<<endl;
cout<<"Capacity of vector:"<<vnew.capacity()<<endl;
for(int i =0;i< vnew.size();i++)

 cout<<vnew[i]<<" ";
 vnew.insert(vnew.begin()+1,50);
 cout<<endl; */
 /*
 
vector<int> arr;
 arr.push_back(2);
 arr.push_back(21);
 arr.push_back(4);
 cout<<arr[0]<<endl;
 cout<<arr.front()<<endl;
 cout<<arr[arr.size()-1]<<endl;
 */
vector<int>ans;
ans.push_back(5);
ans.push_back(2);
ans.push_back(0);

ans.push_back(6);
sort(ans.begin(), ans.end());
for(int i =0;i<ans.size();i++)
cout<<ans[i]<<" ";
cout<<endl;

/*sort(ans.begin(),ans.end(),greater<int>());
for(int i =0;i<ans.size();i++)
cout<<ans[i]<<" "; */


// search in binary search
// condition is true --- 1
// condition is false ---- 0
cout<<binary_search(ans.begin(), ans.end(),8)<<endl;
// find index
 cout<<find(ans.begin(),ans.end(),6)-ans.begin()<<endl;
 // max elemenet
 cout<<*max_element(ans.begin(),ans.end());
 cout<<endl;
 // min element
 cout<<*min_element(ans.begin(), ans.end());

}