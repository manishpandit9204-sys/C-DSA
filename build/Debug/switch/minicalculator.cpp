#include<iostream>
using  namespace std;
int main(){
     int a ,b;
     cout<<"Enter a="<<endl;
     cin>>a;
     cout<<"Enter b="<<endl;
     cin>>b;
     char op;
     cout<<"Enter your operation you want to perform"<<endl;
     cin>>op;
     switch(op){
        case '+': cout<<(a+b)<<endl;
                  break;
        case '-':cout<<(a-b)<<endl;
                  break;
        case '*':cout<<(a*b)<<endl;
                  break;
        case '/':cout<<(a/b)<<endl;
                  break;
        case '%':cout<<(a%b)<<endl;
                  break;
        default:cout<<"Enter the valid expression"<<endl;
     }
}