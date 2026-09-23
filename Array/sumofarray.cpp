#include<iostream>
  using namespace std;
  int   main(){
    int n;
     cout<<"Enter the size of Array"<<endl;
     cin>>n;
     int arr[n];
     cout<<"Enter the element of the array" <<" "<<endl;
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     int sum =0;
     for(int i=0;i<n;i++){
        sum =sum + arr[i];
     }
     cout<<"Sum of all element od the array="<<sum;

  }