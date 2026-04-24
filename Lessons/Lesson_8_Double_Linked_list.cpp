#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = nullptr;
        prev = nullptr;
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

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    newNode->prev = temp;
    temp->next = newNode;
}

int main()
{
    Node *head = nullptr;

    insertval(head, 101);
    insertval(head, 102);
    insertval(head, 103);
    insertval(head, 104);
    insertval(head, 105);

    Node *temp = head;

    while (temp->next != nullptr)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }

    cout << temp->data;
    cout << " null";

    cout << "\nNull ";

    while (temp != nullptr)
    {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "Null";

    return 0;
    return 0;
}