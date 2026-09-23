#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter num=";
    cin>>num;
    cout<<endl;
    switch(num){
        case 1: cout<<"First"<<endl;
        break;
        case 2: cout<<"Second"<<endl;
        break;
        default: cout<<"It is default case"<< endl;
    }
    cout<<endl;
}
//hum switch ke andar bhi switch case use kar skate hai
//ques-why continue is not valid in switch case ?
// ans -continue is only works on inside  the loops while switch is not loop 