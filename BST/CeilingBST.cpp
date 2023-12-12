#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)

    {
        key = k;
        left = right = NULL;
    }
};

Node *printCeiling(Node *root, int x)
{
    Node *res = NULL;
    while (root != NULL)
    {
        if (root->key == x)
        {
            return root;
        }
        else if (root->key < x)
        {
            root = root->right;
        }
        else
        {
            res = root;
            root = root->left;
        }
    }
    return res;
}

int main()
{
    Node *root = new Node(20);
    root->left = new Node(10);
    root->right = new Node(30);
    root->right->left = new Node(25);
    root->right->right = new Node(40);
    Node *ceilNode = printCeiling(root, 23);

    if (ceilNode != NULL)
    {
        cout << "Ceiling of number is: " << ceilNode->key << endl;
    }
    else
    {
        cout << "No ceiling found for given number" << endl;
    }
    return 0;
}