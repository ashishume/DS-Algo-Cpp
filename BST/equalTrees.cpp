#include <bits/stdc++.h>

using namespace std;
class Node
{

public:
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int IsIdentical(Node *x, Node *y)
{
    if (x == NULL && y == NULL)
        return 1;

    return (x != NULL && y != NULL && x->data == y->data && IsIdentical(x->left, y->left) && IsIdentical(x->right, y->right));
}

int main()
{
    Node *x = NULL;
    x = new Node(15);
    x->left = new Node(10);
    x->right = new Node(20);
    x->left->left = new Node(8);
    x->left->right = new Node(12);
    x->right->left = new Node(16);
    x->right->right = new Node(25);

    Node *y = nullptr;

    y = new Node(15);
    y->left = new Node(10);
    y->right = new Node(20);
    y->left->left = new Node(8);
    y->left->right = new Node(12);
    y->right->left = new Node(16);
    y->right->right = new Node(24);

    if (IsIdentical(x, y))
        cout << "Binary";
    else
        cout << "Not binary";
}