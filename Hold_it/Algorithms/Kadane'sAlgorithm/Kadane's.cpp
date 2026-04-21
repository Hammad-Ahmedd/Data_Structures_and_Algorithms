#include <iostream>
using namespace std;

int KadaneMaxSubSum(int arr[], int n)
{
    int maxSum = 0;
    int currentsum = 0;
    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        maxSum = max(maxSum, currentsum);
        if (currentsum < 0)
        {
            currentsum = 0;
        }
    }
    return maxSum;
}

int main()
{
    int n = 4;
    int arr[4] = {1, 2, 3, -2};
    int result = KadaneMaxSubSum(arr, n);
    cout << result << endl;
}