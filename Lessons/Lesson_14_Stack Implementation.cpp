#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *next;
    Node(int data)
    {
        val = data;
        next = nullptr;
    }
};

class mystack
{
    Node *topNode;

public:
    mystack() { topNode = nullptr; }

    void push(int data)
    {
        Node *newNode = new Node{data};
        newNode->next = topNode;
        topNode = newNode;
    }

    void pop()
    {
        if (topNode == nullptr)
            return;

        Node *temp = topNode;
        topNode = topNode->next;
        delete temp;
    }

    int top()
    {
        if (topNode == nullptr)
            return -1;
        return topNode->val;
    }
    bool isEmpty()
    {
        return (topNode == nullptr) ? true : false;
    }
};

int main()
{
    mystack s;

    s.push(5);
    s.push(10);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
}