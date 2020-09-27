#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

Node *insertNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}
void showData(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        // cout << temp->data << " ";
        temp = temp->next;
    }

    cout << count;
}

int main()
{
    Node *head = insertNode(3);
    head->next = insertNode(5);
    head->next->next = insertNode(7);
    head->next->next->next = insertNode(9);

    showData(head);
    return 0;
}