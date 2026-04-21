#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{

    Node *head = new Node{101, nullptr};
    Node *second = new Node{102, nullptr};
    Node *third = new Node{103, nullptr};

    head->next = second;
    second->next = third;

    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
    delete head;
    delete second;
    delete third;

    return 0;
}
