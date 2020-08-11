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

// int height(Node *temp)
// {
//     if (temp == NULL)
//         return 0;
//     else
//     {
//         int left_height = height(temp->left);
//         int right_height = height(temp->right);
//         if (left_height > right_height)
//             return (left_height + 1);
//         else
//             return (right_height + 1);
//     }
// }

void printLevelOrder(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        cout << temp->data << " ";
        q.pop();

        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    printLevelOrder(root);
    // int h = height(root);
    // cout << h << endl;
    return 0;
}