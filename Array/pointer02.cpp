#include<iostream>
using namespace std;
 int  main(){
     int arr[5]= {1,2,3,4,5};
     //arr= arr+2; // noty valid in Array
     int *ptr=arr;


     // print the address of the  first element
      // cout<< arr<< endl;
      //  cout<<arr+0<<endl;
      //  cout<<&arr[0]<<endl;
      //  cout<<ptr<<endl;


      //  // print the second address of the element
      //    cout<<arr+1<<endl;
      //    cout<<&arr[1]<<endl;

      //    // print the value of  0 Index

      //     cout<<arr[0]<<endl;
      //     cout<<*arr<<endl;
      //      cout<<*(arr+0)<<endl;
      //      cout<<*ptr<<endl;

      //      // Print the address  of the element

      //       for(int i=0;i<5;i++){
      //         cout<<arr+i<<" "<<endl;
      //       }

      //     // print all the value of  element

      //      for(int i=0;i<5;i++){
      //          cout<<*(arr+i)<<" ";    
      //      }


      // Print all the value
      //  for(int i=0;i<5;i++){
      //   cout<<ptr[i]<<" ";
      //  }

       // print all the address

      //  for(int i=0;i<5;i++){
      //   cout<<ptr+i<<endl;
      //  }

       // Arithemetic Opreations on pointer  ptr++,ptr--, ptr=ptr+1

        // for(int i=0;i<5;i++){
        //   cout<<*ptr<<" ";
        //   ptr++;
        // }
      //

      // Addition

      // ptr=ptr+3;
      // cout<<ptr<<endl;

      // ptr=ptr-2;
      // cout<<ptr<<endl;

 }