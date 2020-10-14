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
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
// Node *deleteFirstNode(Node *head)
// {
//     Node *temp = head;
//     if (head == NULL)
//         return;

//     head = temp->next;
//     return head;
// }

int main()
{
    Node *head = insertNode(3);
    head->next = insertNode(5);
    head->next->next = insertNode(7);
    head->next->next->next = insertNode(9);

    showData(head);
    // deleteFirstNode()
    return 0;
}