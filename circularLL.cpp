#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

void push(Node **head, int data)
{
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    if (*head == NULL)
    {
        *head = new_node;
        new_node->next = *head;
    }
    else
    {
        Node *ptr = *head;
        while (ptr->next != *head)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
        new_node->next = *head;
    }
}

void prepush(Node **head, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;

    if (*head == NULL)
    {
        *head = temp;
        temp->next = *head;
    }
    else
    {
        Node *ptr = *head;
        temp->next = *head;
        while (ptr->next != *head)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        *head = temp;
    }
}

void display(Node *head)
{
    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

int main()
{
    Node *head = NULL;
    // push(&head, 1);
    // push(&head, 2);
    // push(&head, 3);
    // push(&head, 4);
    // display(head);

    prepush(&head, 1);
    prepush(&head, 2);
    prepush(&head, 3);
    prepush(&head, 4);
    display(head);
    return 0;
}