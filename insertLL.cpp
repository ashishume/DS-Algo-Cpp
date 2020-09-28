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

void insertBegin(Node **head, int newData)
{

	Node *newNode = new Node();
	newNode->data = newData;
	newNode->next = *head;
	*head = newNode;
}

void insertEnd(Node **head, int newData)
{

	Node *newNode = new Node();
	newNode->data = newData;
	newNode->next = NULL;
	Node *temp = *head;
	if (*head == NULL)
	{
		*head = newNode;
		return;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void insertMiddle(Node **head, int newData)
{
	Node *newNode = new Node();
	newNode->data = newData;
	newNode->next = NULL;
	Node *slow = *head;
	Node *fast = *head;
	Node *counterNode = *head;
	Node *temp;
	int count = 0;
	Node *prev;
	while (fast != NULL && fast->next != NULL)
	{
		prev = slow;
		slow = slow->next;
		fast = fast->next->next;
	}
	while (counterNode != NULL)
	{
		counterNode = counterNode->next;
		count++;
	}
	Node *middle = slow;
	if (count % 2 != 0)
	{
		temp = middle->next;
		middle->next = newNode;
		newNode->next = temp;
	}
	else
	{
		newNode->next = middle;
		prev->next = newNode;
	}
}

int main()
{
	Node *head = NULL;
	//    insertBegin(&head,3);
	//	insertBegin(&head,4);
	//	insertBegin(&head,5);
	//    insertBegin(&head,7);
	// insertEnd(&head, 219);
	// insertEnd(&head, 690);
	// insertEnd(&head, 315);
	// insertEnd(&head, 427);
	// insertEnd(&head, 285);
	// insertEnd(&head, 163);

	insertEnd(&head, 10);
	insertEnd(&head, 20);
	insertEnd(&head, 40);
	insertEnd(&head, 50);
	// insertEnd(&head, 60);

	// 219 690 315 427 285 163
	// insertEnd(&head, 4);
	// insertEnd(&head, 5);
	// insertEnd(&head, 6);
	insertMiddle(&head, 30);
	showData(head);
	return 0;
}
