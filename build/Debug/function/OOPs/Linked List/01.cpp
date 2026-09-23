#include<iostream>
#include<vector>
using namespace std;
// Create Node
// class Node{
//     public:
//     int data;
//      Node *next;
//      //Insert Element
//      Node(int value){
//         data=value;
//         next=NULL;
//      }
// };
// int main()
// {
//  Node *Head;
//  Head= new Node(4);
//  cout<<Head->data<<endl;
//  cout<<Head->next<<endl;
// }





///   INSERT THE ELEMENT BEGINNING OF THE LIST

//  class  Node{
//     public:
//     int data;
//     Node *next;

//     Node(int value){
//         data= value;
//         next= NULL;
//     }
//  };

//  int main(){
//     Node *Head;
//     Head= NULL; 

//     int arr[]={2,4,6,8,10};

//     for(int i=0;i<5;i++){
//         if(Head==NULL){
//             Head= new Node(arr[i]);
//         }
//         else{
//             Node  *temp;
//             temp=new Node(arr[i]);
//             temp->next=Head;
//             Head=temp;
//         }
//     }

//     Node *temp=Head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }



//  INSERT THE ELEMENT END OF THE LINKED LIST



// class  Node{
//     public:
//     int data;
//     Node *next;

//     Node(int value){
//         data= value;
//         next= NULL;
//     }
//  };
//  int main()
//  {
//     Node *Head,*Tail;
//     Tail=Head=NULL;

//     int arr[]={2,4,6,8,10};

//     for(int i=0;i<5;i++)
//     {
//        if(Head==NULL){
//         Head= new Node(arr[i]);
//         Tail= Head;
//        }

//        else{
//         Tail->next=new Node(arr[i]);
//         Tail=Tail->next;
//        }
//     }

//     Node *temp=Head;
//      while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//      }
//  }




//  INSERT THE ELEMENT BEGINNING OF THE LIST


//  class  Node{
//     public:
//     int data;
//     Node *next;

//     Node(int value){
//         data= value;
//         next= NULL;
//     }
//  };

//  Node* CreateLinkedList(int arr[],int index,int size){

//     // Base Condition
//     if(index==size){
//         return NULL;
//     }

//     Node*temp;
//     temp= new Node(arr[index]);
//     temp->next=CreateLinkedList(arr,index+1,size);
//     return temp;
//  }

//  int main(){
//     Node *Head;
//     Head= NULL; 

//     int arr[]={2,4,6,8,10};
//     Head= CreateLinkedList(arr,0,5);


//      Node *temp;
//      temp=Head;

//      while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//      }

//  }



//   INSERT THE ELEMENT AT PARTICULAR POSITIONS
// class Node{
//     public:
//     int data;
//     Node *next;

//     Node(int value){
//         data= value;
//         next= NULL;
//     }
//  };

//  Node* CreateLinkedList(int arr[],int index,int size){

//     // Base Condition
//     if(index==size){
//         return NULL;
//     }

//     Node*temp;
//     temp= new Node(arr[index]);
//     temp->next=CreateLinkedList(arr,index+1,size);
//     return temp;
//  }

//  int main(){
//     Node *Head;
//     Head= NULL; 

//     int arr[]={2,4,6,8,10};
//     Head= CreateLinkedList(arr,0,5);

//     int x=3;
//     int value=30;

//     Node *temp= Head;
//     x--;
//     while(x--){
//         temp = temp->next;
//     }

//     Node *temp2= new Node(value);
//     temp2->next=temp->next;
//     temp->next= temp2;

//      temp=Head;

//      while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//      }

//  }



class Node{
    public:
    int data;
    Node* next;
public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }

    

};

int main(){
    vector<int>arr= {2,3,5,8};
    Node* y = new Node(arr[2],nullptr);
    cout<<y->data;
}






class Solution {
  public:
    Node* rotate(Node* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // Step 1: Count nodes
        int n = 1;
        Node* tail = head;
        while (tail->next) {
            tail = tail->next;
            n++;
        }

        // Step 2: Normalize k
        k = k % n;
        if (k == 0) return head;

        // Step 3: Traverse to kth node
        Node* curr = head;
        for (int i = 1; i < k; i++) {
            curr = curr->next;
        }

        // Step 4: Break and reconnect
        Node* newHead = curr->next;
        curr->next = NULL;
        tail->next = head;

        return newHead;
    }
};













class Solution {
public:
    bool isPalindrome(Node *head) {
        if (head == NULL || head->next == NULL)
            return true;

        Node* slow = head;
        Node* fast = head;

        // Find middle
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second half
        Node* second = slow->next;
        Node* prev = NULL;

        while (second) {
            Node* next = second->next;
            second->next = prev;
            prev = second;
            second = next;
        }

        Node* first = head;
        Node* secondHead = prev;

        // Compare
        while (secondHead) {
            if (first->data != secondHead->data)
                return false;

            first = first->next;
            secondHead = secondHead->next;
        }

        return true;
    }
};