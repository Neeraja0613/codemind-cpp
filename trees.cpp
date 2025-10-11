#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* left;
    Node* right;
    Node(int value)
    {
        data=value;
        left=NULL;
        right=NULL;
    }
};
int main() {
    Node* parent= new Node(7);
    Node* child1= new Node(4);
    Node* child2= new Node(13);
    parent->left=child1;
    parent->right=child2;
    cout<<parent->data<<endl;
    cout<<parent->left->data<<endl;
    cout<<parent->right->data<<endl;
}
