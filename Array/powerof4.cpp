#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n==0){
        cout<<"No";
        return 0;
    }

    while(n!=0){
        int r = n % 4;

        if(r != 0 && n != 1){  
            cout<<"No";
            return 0;
        }

        n /= 4;
    }

    cout<<"Yes";
}