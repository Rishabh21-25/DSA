#include <iostream>
#include <unordered_set>
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

bool isPairSum(Node *root, int sum, unordered_set<int> &s)
{
    if (root == NULL)
    {
        return false;
    }
    if (isPairSum(root->left, sum, s) == true)
    {
        return true;
    }
    if (s.find(sum - root->key) != s.end())
    {
        return true;
    }
    else
    {
        s.insert(root->key);
    }
    return isPairSum(root->right, sum, s);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->right->left = new Node(16);
    root->right->right = new Node(40);
    unordered_set<int> s;
    cout << isPairSum(root, 25, s);
    return 0;
}