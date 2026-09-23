#include<iostream>
using namespace std;
int main(){
    int x;
    int ans =0;
    cout<<"Enter any Number=";
    cin>>x;
    while(x!=0){
        int digit = x%10;
        ans =(ans*10)+ digit;
         x=x/10;
       // cout<<"Reverse Number is ="<<x;
    }
    cout<<"Reverse Number is ="<<ans;

}