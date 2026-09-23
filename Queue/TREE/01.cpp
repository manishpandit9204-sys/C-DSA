// create a tree

#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

int main()
{

    int x;
    cout << "Enter the root Element of Binary Tree: ";
    cin >> x;
    int first, second;
    queue<Node *> q;
    Node *root = new Node(x);
    q.push(root);

    // BUILD THE BINARY TREE

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << "Enter the left child of " << temp->data << " :";
        cin >> first;
        // left Node

        if (first != -1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }
       // right Node 
        cout << "Enter the right child of " << temp->data << " :";
        cin >> second;

        if (second != -1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }
}