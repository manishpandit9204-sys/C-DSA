#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left,*right;
    Node(int value){
        data= value;
        left=right=NULL;
    }
};
    Node *BinaryTree(){
        int  x;
        cin>>x;
        if(x==-1)
        return NULL;

        Node *temp= new Node (x);
        cout<<"Enter the Left child of "<<x<<":";
        temp->left=BinaryTree();
        cout<<"Enter the right child of"<<x<<":";
        temp->right=BinaryTree();
        return temp;
        }
          // Preorder
        void preOrder(Node *root){
            if(root==NULL)
            return;
            //Root
            cout<<root->data;
            //Left Node
            preOrder(root->left);
            // Right Node
            preOrder(root->right);
        }
         // InOrder
        void inOrder(Node *root){
            if(root==NULL)
            return;
            //left Node
            inOrder(root->left);
            //Root
            cout<<root->data;
            //Right Node
            inOrder(root->right);
            
        }
        // PostOrder
        void postOrder(Node *root){
            if(root==NULL)
            return;
            // Left Node
            postOrder(root->left);
            // Right Node
            postOrder(root->right);
            // Root
            cout<<root->data;
        }

int main(){
 cout<<"Enter root Node:";
 Node *root;
 root=BinaryTree();
 cout<<"Preorder:";
 preOrder(root);
 cout<<"\nInOrder :";
 inOrder(root);
 cout<<"\nPostOrder :";
 postOrder(root);

 
}