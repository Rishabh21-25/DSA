#include <iostream>
#include <climits>
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

/*
Efficient Solution
If inorder is sorted it is BST.
*/

int prev = INT_MIN;
bool isBST(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    if (isBST(root->left) == false)
    {
        return false;
    }
    if (root->key <= ::prev)
    {
        return false;
    }
    ::prev = root->key;
    return isBST(root->right);
}

// bool isBST(Node *root, int min, int max)
// {
//     if (root == NULL)
//     {
//         return true;
//     }
//     return (
//         root->key > min && root->key < max && isBST(root->left, min, root->key) && isBST(root->right, root->key, max));
// }

int main()
{
    Node *root = new Node(20);
    root->left = new Node(10);
    root->right = new Node(30);
    root->right->left = new Node(18);
    root->right->right = new Node(40);
    cout << isBST(root);
    return 0;
}