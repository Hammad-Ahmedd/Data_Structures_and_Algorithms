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

int main()
{

    Node *head = nullptr;
    insertval(head, 10);
    insertval(head, 20);
    insertval(head, 40);
    insertval(head, 50);
    insertval(head, 80);

    Node *salman = head;
    while (salman != nullptr)
    {
        cout << salman->data << " -> ";
        salman = salman->next;
    }
    cout << "NULL" << endl;

    return 0;
}