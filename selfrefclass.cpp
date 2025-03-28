#include<iostream>
using namespace std;
class node
{
    public:int data;
    node *left;
    node *right;
    node(int d)
    {
        data = d;
        left=NULL;
        right=NULL;
    }
};

int main()
{
    node *root= new node(10);
    root->left  = new node(20);
    root->right = new node(30);
    cout << "Pre order\n";

    cout << root->data<< "\t";
    cout << root->left->data << "\t";
    cout << root->right->data << "\n";

    cout << "In order\n";
    cout << root->left->data<< "\t";
    cout << root->data << "\t";
    cout << root->right->data << "\n";

    cout << "Post order\n";

    cout << root->left->data << "\t";
    cout << root->right->data << "\t";
    cout << root->data << "\t";
}
