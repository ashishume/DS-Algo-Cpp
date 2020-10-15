#include <bits/stdc++.h>

using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node()
    {
        left = NULL;
        right = NULL;
    }
};

struct Info
{
    int lDepth;
    int rDepth;
    bool contains;

    int time;

    Info()
    {
        lDepth = rDepth = 0;
        contains = false;

        time = -1;
    }
};

Info calcTime(Node *root, Info &info, int target, int &res)
{
    
}

Node *
newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    return temp;
}

int minTime(Node *root, int target)
{
    int res = 0;
    Info info;

    calcTime(root, info, target, res);

    return res;
}

int main()
{

    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->left->left->left = newNode(8);
    root->left->right->left = newNode(9);
    root->left->right->right = newNode(10);
    root->left->right->left->left = newNode(11);

    // target node is 8
    int target = 11;

    cout << minTime(root, target);

    return 0;
}