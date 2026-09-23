#include<iostream>
using namespace std;
int main(){
    int arr[15];
    cout<<endl<<"Element of first index"<<arr[0]<<endl;
    cout<<endl<<"Element of 10th index"<< arr[9]<<endl;
    cout<<endl<<"Element of 16th index"<<arr[20]<<endl;
    cout<<endl;
    int arr2[3]={5,10,15};
    cout<<"Element of 2nd index="<<arr2[2];
    cout<<endl;

    int arr3[20]={6,10};
    int n =20;
    for(int i=0;i<n;i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
char ch[6]={'M','A','N','I','S','H'};
int m=6;
for(int j=0;j<m;j++){
    cout<<ch[j]<<" ";
    

}
cout<<endl;
cout<<sizeof(ch);

}

