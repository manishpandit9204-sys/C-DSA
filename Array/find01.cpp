#include<iostream>
using namespace std;
int main(){
int arr[6]={0,1,0,1,0,1};
int count0=0;
int count1=0;
for(int i = 0 ;i<6;i++){
    if(arr[i]==0){
        count0++;
    }
    else{
        count1++;
    }
}
cout<<count0<<endl;
cout<<count1<<endl;
}