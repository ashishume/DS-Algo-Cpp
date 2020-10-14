#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void showData(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *insertEnd(Node *head, int newData)
{

    Node *newNode = new Node(newData);
    if (head == NULL)
        return newNode;

    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;

    return head;
}

Node *deleteFirstNode(Node *head)
{
    Node *temp = head;
    if (head == NULL)
        return head;

    head = temp->next;
    return head;
}
// int checkEquality(Node *first, Node *second)
// {
//     int count = 0;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data == data)
//             return count;
//         count++;
//         temp = temp->next;
//     }
//     return 0;
// }

int main()
{
    Node *head = NULL;

    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30); //delete this
    head = insertEnd(head, 40);
    head = insertEnd(head, 50);
    head = insertEnd(head, 60);
    // showData(head);
    // cout << endl;
    // int c = searchNode(head, 50);
    // showData(head);
    // cout << c;
    return 0;
}
