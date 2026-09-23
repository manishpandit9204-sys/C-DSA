#include<iostream>
using namespace std;

// WITHOUT RECURSION BUT WORK AS RECURSION
//  void fun3(int n){
//     cout<<n<<"days left for your birthday"<<endl;
//  }
//   void fun2(int n){
//    cout<<n<<"days left for your birthday"<<endl;
//   }
//    void fun1(int n){
//       cout<<n<<" days left for your birthday"<<endl;
//    }
//     void fun0(int n){
//        cout<<"Happy Birthday!!!!!"<<endl;
//     }
//  int  main(){
//     fun3(3);
//     fun2(2);
//     fun1(1);
//     fun0(0);

// USING RECURSION
// void fun3(int);
// void fun2(int);
// void fun1(int);
// void fun0(int);

//  void fun3(int n){
//     cout<<n<<"days left for your birthday"<<endl;
//     fun2(n-1);
//  }
//   void fun2(int n){
//    cout<<n<<"days left for your birthday"<<endl;
//    fun1(n-1);
//   }
//    void fun1(int n){
//       cout<<n<<" days left for your birthday"<<endl;
//       fun0(n-1);
//    }

// without declaring function easily print that 
//     void fun0(int n){
//        cout<<"Happy Birthday!!!!!"<<endl;
//     }
//     void fun1(int n){
//       cout<<n<<" days left for your birthday"<<endl;
//       fun0(0);
//    }
//    void fun2(int n){
//    cout<<n<<"days left for your birthday"<<endl;
//    fun1(n-1);
//   }
//    void fun3(int n){
//     cout<<n<<"days left for your birthday"<<endl;
//     fun2(n-1);
//  }
//  int  main(){
//     fun3(3);
//    }

// Other Method but Same Work


 void fun3(int n ){
   // Base Case
    if(n==0){
       cout<<"Happy Birthday!!!!!!!\n";
       return;
    }
     cout<<n<<" days left for Birthday\n";
      fun3(n-1);
 }
  int main(){
   int n =5;
    fun3(8);
  }
 