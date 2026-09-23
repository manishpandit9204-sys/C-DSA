#include<iostream>
using namespace std;

// Deque implementation using linked list
// class Node{
//     public:
//     int data;
//     Node *next,*prev;

//     Node(int value){
//         data= value;
//         next=prev=NULL;
//         }
// };

// class Dequeue{
//     Node *front ,*rear;
//     public:

//     Dequeue(){
//         front=rear=NULL;
//     }
// // push front
// void push_front(int x){
//     if(front==NULL){
//         front= rear=new Node(x);
//         cout<<"Pushed"<<x<<"in the front of deque";
//         return;
//     }
//     else{
//         Node *temp= new Node(x);
//         temp->next= front;
//         front->prev= temp;
//         front= temp;
//          cout<<"Pushed"" "<<x<<" ""in the front of deque";
//         return;

//     }
// }
// // push back;
// void push_back(int x){
//     if(front==NULL){
//         front= rear=new Node(x);
//         cout<<"Pushed"" "<<x<<" ""in the back of deque\n";
//         return;
//     }
//     else{
//         Node *temp= new Node(x);
//         rear->next=temp;
//         temp->prev=rear;
//         rear=temp;
//          cout<<"Pushed"" "<<x<<" ""in the back of deque\n";
//         return;

//     }
// }
// //pop front

// void pop_front(){
//     if(front==NULL){
//         cout<<"Dequeue is underflow\n";
//         return;
//     }
//     else{
//         Node *temp= front;
//         cout<<"popped"<<temp->data<<"from the front\n";
//         front=front->next;
//         delete temp;

//         if(front)
//         front->prev=NULL;

//         else
//         rear=NULL;
//     }
// }
// //pop back
// void pop_back(){
//     if(front==NULL){
//         cout<<"Dequeue is underflow\n";
//         return;
//     }
//     else{
//         Node *temp= rear;
//         cout<<"popped"<<temp->data<<"from the front\n";
//         rear=rear->prev;
//         delete temp;

//         if(rear)
//         rear->next=NULL;

//         else
//         front=NULL;
//     }
// }
// // start

// int start(){
//     if(front==NULL)
//     return -1;

//     else{
//         return front->data;
//     }
// }
// // end
// int end(){
//  if(front==NULL){
//     return -1;
//  }
//  else{
//     return rear->data;
//  }
// }

// };
// int main()
// {
// Dequeue d;
// d.push_back(7);
// d.push_front(9);
// cout<<d.start()<<endl;
// cout<<d.end()<<endl;
// }


// Dequeue implementation  using array

class Dequeue{
    int front , rear,size;
    int *arr;
    public:
    Dequeue(int n){
        size=n;
        arr= new int[n];
        front=rear=-1;
    }
    bool IsEmpty(){
        return front==-1;
    }
    bool IsFull(){
        return (rear+1)%size==front;
    }
    void push_front(int x){
       if(IsEmpty()){
        front=rear=0;
        cout<<"pushed "<<x<<"  in front\n";
        arr[0]=x;
        return;
       }
       else if(IsFull()){
        cout<<"Dequeue Overflow\n";
        return;
       }
       else{
        front=(front-1+size)%size;
        arr[front]=x;
        cout<<"pushed "<<x<<" in front\n";
        return ;
       }
    }

    void push_back(int x){
       if(IsEmpty()){
        front=rear=0;
        cout<<"pushed "<<x<<"  in back\n";
        arr[0]=x;
        return;
       }
       else if(IsFull()){
        cout<<"Dequeue Overflow\n";
        return;
       }
       else{
        rear=(rear+1)%size;
        arr[rear]=x;
        cout<<"pushed "<<x<<" in back\n";
        return ;
       }
    }
    void pop_front(){
        if(IsEmpty()){
            cout<<"Dequeue Underflow\n";
            return;
        }
        else{
            if(front==rear){
                front=rear-1;
            }
            else{
                front=(front+1)%size;
            }
        }
    }

       void pop_back(){
        if(IsEmpty()){
            cout<<"Dequeue Underflow\n";
            return;
        }
        else{
            if(front==rear){
                front=rear=-1;
            }
            else{
                rear=(rear-1+size)%size;
            }
        }
    }
    int start(){
        if(IsEmpty())
        return -1;
        else{
            return arr[front];
        }
    }
     int end(){
        if(IsEmpty())
        return -1;
        else{
            return arr[rear];
        }
    }
};
int main(){
    Dequeue d(4);
    d.push_back(7);
    d.push_front(9);
    d.push_front(19);
    cout<<d.start()<<endl;
    cout<<d.IsEmpty()<<endl;
}