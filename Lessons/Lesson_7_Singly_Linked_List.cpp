#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

void insertval(Node *&head, int val)
{

    Node *newNode = new Node(val);

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *temp = head;

    // nullptr != nullptr => false
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
};

void delete_Node_With_Loop(Node *&head)
{
    if (head == nullptr)
    {
        return;
    }
    Node *temp = head;
    while (head != nullptr)
    {
        head = head->next;
        delete temp;
        temp = head;
    }
}

void delete_Node_With_Recursion(Node *&head)
{
    if (head == nullptr)
    {
        return;
    }

    Node *temp = head;
    head = head->next;
    delete temp;

    delete_Node_With_Recursion(head);
}

int main()
{

    Node *head = nullptr;
    insertval(head, 10);
    insertval(head, 20);
    insertval(head, 40);
    insertval(head, 50);
    insertval(head, 80);

    cout << "Before Deletion " << endl;

    Node *salman = head;
    while (salman != nullptr)
    {
        cout << salman->data << " -> ";
        salman = salman->next;
    }
    cout << "NULL" << endl;

    cout << "After Deletion " << endl;
    delete_Node_With_Recursion(head);

    Node *newnode = head;
    while (newnode != nullptr)
    {
        cout << newnode->data << " -> ";
        newnode = newnode->next;
    }
    cout << "NULL" << endl;

    return 0;
}