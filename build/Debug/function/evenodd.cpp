#include<iostream>
using namespace std;
bool evenodd(int num){
    return (num%2==0);
}
 int main (){

    int num;
    cout<<"Enter  the num"<<endl;
    cin>>num;
     if( evenodd(num)){
        cout<<num<<" "<<"is Even"<< endl;
     }
     else{
        cout<<num<<" "<<"is Odd"<< endl;
     }
 }