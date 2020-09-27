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

void display(Node *head)
{
    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

void reverse(Node **head)
{

    Node *current = *head;
    Node *prev = NULL, *next = NULL;
    while (current != NULL)
    {

        next = current->next;
        current->next = prev;

        prev = current;
        current = next;
    }
    *head = prev;
}

int main()
{
    Node *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    display(head);
    cout << endl;
    reverse(&head);
    display(head);

    return 0;
}