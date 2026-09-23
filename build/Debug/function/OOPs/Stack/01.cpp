
 // Stack Implementation using array 
// #include<iostream>
// using namespace std;
// class Stack{
//      int *arr;
//      int size;
//      int top;

//      public:

//      Stack(int s){
//         size =s;
//         top=-1;
//         arr= new int [s];
//      }
//      // Push
//  void push(int value){

//     if(top==size-1){
//         cout<<"Stack Overflow\n";
//         return;
//     }
//     else{
//         top++;
//         arr[top]=value;
//         cout<<"Pushed" " "<<value<< " ""into the stack\n";
//         }
//  }
//     // Pop

//     void pop(){
//         if(top==-1){
//             cout<<"Stack Underflow\n";
//         }
//         else{
//             top--;

//         }
//     }
//      //Peek
    
//      int peek(){
//          if(top==-1){
//             cout<<"Stack is Empty";
//             return -1;
//          }
//          else{
//             return arr[top];
//          }
//      }

//      //IsEmpty
//      bool IsEmpty()
//      {
//         return top==-1;
//      }
//      //Issize
//      int IsSize(){
//         return  top+1;
//      }
// };
// int  main(){
//  Stack S(5);
//  S.push(9);
//  S.push(7);
//  S.push(2);
// // S.pop();
// // S.pop();
// // S.pop();
//  cout<<S.peek()<<endl;
//  cout<<S.IsEmpty()<<endl;
//  cout<<S.IsSize()<<endl;
// }





//Stack Implemention using Linked List

// #include <iostream>
// using namespace std;
//  class Node{
//     public:
//     int data;
//     Node *next;
 

//  Node (int value){
//     data = value;
//     next = NULL;
//  }
// };

//  class Stack{

//     Node *top;
//     int size;

//     public:

//     Stack(){
//         top=NULL;
//         size=0;
//     }


//     // push
//      void push(int value)
//      {
//          Node *temp= new Node(value);
//          if(temp==NULL){
//             cout<<"Stack Overflow\n";
//             return;
//          }
//          else{
//             temp->next= top;
//             top= temp;
//             size++;
//          }
//      }
//     //pop

//     void pop(){
//         if(top==NULL){
//             cout<<"stack Underflow\n";
//             return;
//         }
//         else{
//             Node *temp=top;
//             top=top->next;
//             delete temp;
//             size--;
//         }
//     }
//     //peek

//     int peek(){
//          if(top==NULL){
//             cout<<"Stack is empty\n";
//             return -1;

//          }
//          else{
//             return top->data;
//          }
//     }
//     // IsEmpty

//     bool IsEmpty(){
//         return top==NULL;
//     }
//     //IsSize
//     int InSize(){
//         return size;
//     }
//  };
// int main(){
//  Stack S;
//  S.push(7);
//  S.push(8);
//  S.push(5);
//  S.push(6);
//  S.push(9);
//  cout<<S.peek()<<endl;
// }



//  STACK IMPLEMENTATION USING THAT LIBRARY

#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>S;
    S.push(7);
    S.push(8);
    S.push(5);
    S.push(8);

   cout<< S.top()<<endl;
   cout<<S.size()<<endl;
}




class Solution {
public:
    bool isBalanced(string& s) {
        stack<char> st;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty())
                    return false;

                char top = st.top();
                st.pop();

                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }

        return st.empty();
    }
};