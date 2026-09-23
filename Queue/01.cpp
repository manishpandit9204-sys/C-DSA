// #include<iostream>
// using namespace std;


// QUEUE IMPLEMENTATION USING ARRAY

// class Queue{
//  int *arr;
//  int front , rear, size;
//  public:
//  Queue(int n){
//     arr= new int[n];
//     size=n;
//     front= rear=-1;
//  }
// // for Empty or not
//  bool IsEmpty(){
//     return front==-1;
//  }
//  // for Full or Not
//    bool IsFull(){
//     return rear==size-1;
//    }

//    // push Element into queue

//    void push(int x){
//     // Empty
//     if(IsEmpty()){
//         front= rear=0;
//         arr[0]=x;
//         return;
//     }
//     // full
//     else if(IsFull()){
//         cout<<"Queue is Overflow\n";
//         return;
//     }
//     // insert
//     else{
//         rear= rear+1;
//         arr[rear]=x;
//     }
//    }


//    // pop Element
//     void pop(){

//         if(IsEmpty()){
//             cout<<"Queue is underflow\n";
//             return;
//         }
//         else{
//              if(front==rear)
//              front=rear=-1;
//              else{
//                 front=front+1;
//              }
//         }
//     }

//     // front of the element
//     int start(){
//         if(IsEmpty()){
//             cout<<"Queue is empty\n";
//             return -1;
//         }
//         else{
//             return arr[front];
//         }
//     }
// };
//  int main()
//  {
//    Queue q(5);
//    q.push(7);
//    q.push(8);
//    q.push(67);
//    cout<<q.start()<<endl;
//    q.pop();
//    cout<<q.start()<<endl;
//  }



 // QUEUE IMPLEMENTATION USING CIRCULAR QUEUE

//  class Queue{
//  int *arr;
//  int front , rear, size;
//  public:
//  Queue(int n){
//     arr= new int[n];
//     size=n;
//     front= rear=-1;
//  }
// // for Empty or not
//  bool IsEmpty(){ 
//     return front==-1;
//  }
//  // for Full or Not
//    bool IsFull(){
//     return (rear+1)% size== front;
//    }

//    // push Element into queue

//    void push(int x){
//     // Empty
//     if(IsEmpty()){
//         front= rear=0;
//         arr[0]=x;
//         return;
//     }
//     // full
//     else if(IsFull()){
//         cout<<"Queue is Overflow\n";
//         return;
//     }
//     // insert
//     else{
//         rear= (rear+1)%size;
//         arr[rear]=x;
//     }
//    }


//    // pop Element
//     void pop(){

//         if(IsEmpty()){
//             cout<<"Queue is underflow\n";
//             return;
//         }
//         else{
//              if(front==rear)
//              front=rear=-1;
//              else{
//                 front=(front+1)%size;
//              }
//         }
//     }

//     // front of the element
//     int start(){
//         if(IsEmpty()){
//             cout<<"Queue is empty\n";
//             return -1;
//         }
//         else{
//             return arr[front];
//         }
//     }
// };
//  int main()
//  {
//    Queue q(5);
//    q.push(7);
//    q.push(8);
//    q.push(67);
//    cout<<q.start()<<endl;
//    q.pop();
//    cout<<q.start()<<endl;
//  }


// QUEUE IMPLEMENTATION USING LINKED LIST


// class Node{
// public:
// int data;
// Node *next;

// Node(int value){
//     data= value;
//     next= NULL;
// }

// };

// class Queue{
//     Node *front;
//      Node *rear;
//      public:
//      Queue(){
//         front= rear=NULL;
//      }
//      // Queue is empty or not

//      bool IsEmpty(){
//         return front==NULL;
        
//      }

//      // push element into the queue

//      void push(int x){
//         if(IsEmpty()){
//             front=rear= new Node(x);
//         }
//         else{
//             rear->next= new Node(x);
//             rear= rear->next;
//         }
//     }

//     void pop(){
//         if(IsEmpty()){
//             cout<<"Queue UnderFlow";
//         }
//         else{
//             Node *temp= front;
//             front= front->next;
//             delete temp;
//         }
//     }
//     int start(){
//         if(IsEmpty()){
//             cout<<"Queue is Empty";
//             return -1;
//         }
//         else{
//             return front->data;
//         }
//     }
//  };

//  int main(){
//     Queue q;
//     q.push(7);
//     q.push(56);
//     q.push(34);
//     q.push(342);
//     q.pop();
//    cout<<q.start()<<endl;
//    cout<<q.IsEmpty()<<endl;
//  }









// Queue Implementation using stl

#include<iostream>
#include<queue>
using namespace std;
int main(){

    // How to create a queue
    queue<int>q;
    q.push(76);
    q.push(77);
    q.push(78);
    q.push(790);
    // delete element
    q.pop();
    // front element
    cout<<q.front()<<endl;
    // back element
    cout<<q.back()<<endl;
    // size
    cout<<q.size()<<endl;
    // empty
    cout<<q.empty()<<endl;
}