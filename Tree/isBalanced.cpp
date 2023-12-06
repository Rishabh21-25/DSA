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

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return max(height(root->left), height(root->right)) + 1;
    }
}

// bool isBalanced(Node *root)
// {
//     if (root == NULL)
//     {
//         return true;
//     }
//     int lh = height(root->left);
//     int rh = height(root->right);
//     return (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right));
// }

// Efficient Solution

int isBalanced(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = isBalanced(root->left);
    if (lh == -1)
    {
        return -1;
    }
    int rh = isBalanced(root->right);
    if (rh == -1)
    {
        return -1;
    }

    if (abs(lh - rh) > 1)
    {
        return -1;
    }

    else
    {
        return max(lh, rh) + 1;
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    cout << isBalanced(root);
    return 0;
}