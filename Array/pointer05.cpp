#include<iostream>
using namespace std;
int main(){

    // Variable ke liye Heap  memory allocate karna 
    //  int *ptr= new  int;
    //  *ptr=5;
    //  cout<<*ptr<<endl;
    //   float *ptr2= new float;
    //   *ptr2= 3.5;
    //    cout<<*ptr2<<endl;

       // Create a  1D-Array with the help of Pointer
        // int n;
        //  cout<<"Enter the Size of Array :";
        //  cin>>n;
        //  int *p=new int[n];
         // Input the Values
        //   for(int i=0;i<n;i++){
        //      p[i]=i+1;
        //   }
          // Print the Values
        //    for(int i=0;i<n;i++){
        //     cout<<p[i]<<endl;
        //    }

            //Delete Keywords use
            //  delete ptr;
            //  delete ptr2;
            //  delete[] p;


//   CREATION OF 2D ARRAY 

// Array create karna hai , jo store krga address ko 

//int n,m;//n= rows, m , columns
//  cin>>n>>m;

//      int **ptr= new int *[n];
//  for(int i=0;i<n;i++){
//     ptr[i]= new int [m];
//  }
//      for(int i=0;i<n;i++){
//          for(int j=0;j<m;j++){
//             cin>>ptr[i][j];
//          }
//      }
//      for(int i=0;i<n;i++){
//          for(int j=0;j<m;j++){
//             cout<<ptr[i][j]<<" ";
            // cout<<endl;
    //      }
    //      cout<<endl;
    //  }

     // delete the memory, heap me
    //   for(int i=0;i<n;i++)
    //     delete ptr[i];
    //     delete[] ptr;
      

 // CREATION OF 3D- ARRAY
  
int L,B,H;
 cin>>L>>B>>H;
   int ***ptr = new int**[L];
// Create 2D array and store its address in ptr
 for(int i=0;i<L;i++){
    ptr[i]= new int *[B];
    for(int j=0;j<B;j++){
        ptr[i][j]= new int [H];

    }
 }
 for(int i=0;i<L;i++)
  for(int j=0;i<B;j++)
 for(int k=0;i<H;k++)
 ptr[i][j][k]=i+j+k;

 for(int i=0;i<L;i++)
  for(int j=0;j<B;j++)
 for(int k=0;k<H;k++)
  cout<<ptr[i][j][k]<<" ";
   


}