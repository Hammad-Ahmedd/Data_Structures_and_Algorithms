#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    // Stack

    stack<int> s;
    s.push(10);
    s.push(20);
    cout << "The Top of the stack = " << s.top() << endl;
    s.pop();
    cout << "the top of the stack after pop the stack = " << s.top() << endl;

    // Queue

    queue<int> q;
    q.push(10);
    q.push(20);
    cout << "Front of the queue = " << q.front() << endl;
    q.pop();
    cout << "Front of the queue after pop the queue = " << q.front() << endl;
}