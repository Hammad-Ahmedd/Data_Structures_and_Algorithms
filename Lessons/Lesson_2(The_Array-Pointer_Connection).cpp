#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Note: No '&' needed for arrays!
    for (int i = 0; i < 5; i++)
    {
        cout << "Array number at " << i << " " << *(ptr + i) << endl;
    }
}