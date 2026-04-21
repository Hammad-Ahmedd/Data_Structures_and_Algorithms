#include <iostream>
using namespace std;

struct student
{
    int id;
    int age;
    int marks;
    student *ptr;
};

int main()
{

    student s1 = {101, 18, 99};
    student s2 = {102, 20, 90};

    s1.ptr = &s2;
    s2.ptr = &s1;

    cout << "print s1" << endl;
    cout << "Before change s1 id " << s1.id << endl;
    cout << "s1 age " << s1.age << endl;
    cout << "s1 marks " << s1.marks << endl;

    student *ptr = &s1;
    (*ptr).id = 105;
    cout << "ptr id " << (*ptr).id << endl;
    cout << "After change s1 id " << s1.id << endl;
}