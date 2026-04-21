#include <iostream>
using namespace std;

int maxSubarr(int arr[], int n)
{
    int maxsum = 0;
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            totalsum = 0;
            for (int k = i; k <= j; k++)
            {
                totalsum += arr[k];
                maxsum = max(totalsum, maxsum);
            }
        }
    }
    return maxsum;
}

int main()
{
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int result = maxSubarr(arr, n);
    cout << result << endl;
}