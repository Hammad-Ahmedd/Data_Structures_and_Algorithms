#include <iostream>
using namespace std;

struct Node
{
    int id;
    Node *next;
};

int main()
{
    Node *s1 = new Node;
    Node *s2 = new Node;
    Node *s3 = new Node;

    s1->id = 101;
    s2->id = 102;
    s3->id = 103;

    /// the s1 , s2 and s3 contains the address of the node in heap.

    s1->next = s2;
    s2->next = s3;
    s3->next = nullptr;

    cout << s1->next->id << endl;

    return 0;
}