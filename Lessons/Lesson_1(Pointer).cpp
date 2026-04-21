#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    cout << "Value of a: " << a << endl;
    cout << "Address of a (&a): " << &a << endl;
    cout << "Value inside ptr: " << ptr << endl;
    cout << "Value ptr is pointing to (*ptr): " << *ptr << endl;

    *ptr = 20;

    cout << "New value of a: " << a << endl;

    return 0;
}