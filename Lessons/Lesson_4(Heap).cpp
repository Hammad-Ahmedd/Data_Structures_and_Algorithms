#include <iostream>
using namespace std;

struct Student
{
    int id;
    int marks;
};

int main()
{
    // 1. Requesting space for ONE student on the HEAP
    // 'new Student' gives us an address. We store it in a pointer.
    Student *heapPtr = new Student;

    // 2. Setting values using our favorite arrow operator
    heapPtr->id = 500;
    heapPtr->marks = 85;

    cout << "Student on Heap ID: " << heapPtr->id << endl;

    // 3. VERY IMPORTANT: Giving the memory back
    delete heapPtr;

    // Now heapPtr is a "Dangling Pointer". It's a key to a house that was demolished.
    heapPtr = nullptr; // Safety first!

    return 0;
}