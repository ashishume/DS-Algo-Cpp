#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int inorder(Node *root, int n)
{
    static int count = 0;

    if (!root)
        return 0;

    inorder(root->left, n);
    count++;
    if (count == n)
        return root->data;
    inorder(root->right, n);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    int n = 4;
    cout << inorder(root, n);

    return 0;
}