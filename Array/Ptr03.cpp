// #include<iostream>
// using namespace std;
//  int main(){
    //  char arr[5]="1234";
    //   char *ptr = arr;
    //    cout<<arr<<endl;
    //    cout<<ptr<<endl;
    
    //  cout<<(void*)arr<<endl;// correct way to print the address  of the pointer
   // cout<< static_cast<void*>(arr)<<endl; Also way to print the address of the pointer
    //   cout<<(void*)ptr<< endl;// correct way to print the address of the pointer
        
    //  char name = 'a';
    //   char *ptr1= &name;
    //    cout<<(void*)&name<<endl;
    //    cout<<(void*)ptr1<<endl;
    
    // SWAPPING TWO NUMBER WITH THE HELP OF POINTER USING FUNCTION
      #include <iostream>
      using namespace std;
      void swapping(int *p1, int *p2){
        int temp=*p1;
        *p1=*p2;
        *p2=temp;
      }
      int main(){
         int first= 10;
         int second = 20;
         swapping(&first,&second);
         cout<<first<<" "<<second;
      }

   

     //}