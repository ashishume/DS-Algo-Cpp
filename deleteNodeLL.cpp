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

// *Node deleteFront(Node *head)
// {
//     Node* temp=head;
    
// }

int main()
{
    Node *head = NULL;

    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 40);
    head = insertEnd(head, 50);
    showData(head);
    cout << endl;
    // head = deleteFront(head);
    showData(head);
    cout << endl;
    return 0;
}
