#include<iostream>
#include<queue>
using namespace std;
int main(){
    // priority_queue<int>pq;
    // // max-heap -> maximum value ->Highest Priority
    // pq.push(67);
    // pq.push(65);
    // pq.push(78);
    // pq.push(62);

    // cout<<pq.top()<<endl;
    // pq.push(90);
    // cout<<pq.top()<<endl;
    // cout<< pq.size() <<endl;
    // if(pq.empty()==true){
    //     cout<<"PQ is empty"<<endl;
    // }
    // else{
    //     cout<<"PQ is not empty"<<endl;
    // }

// MIN HEAP

priority_queue<int,vector<int>,greater<int>>pq;
   pq.push(100);//100
   pq.push(50);//50,100
   pq.push(20);// 20,50,100
   pq.push(86);// 20,50,86,100
   pq.push(78);// 20,50,78,86,100

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    
}