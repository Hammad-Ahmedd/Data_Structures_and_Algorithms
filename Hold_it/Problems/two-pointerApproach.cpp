#include <iostream>
#include <vector>
using namespace std;

vector<int> pairsum(vector<int> nums, int target)
{
    vector<int> ans;
    int i = 0;
    int j = nums.size() - 1;
    while (i < j)
    {
        if (nums[i] + nums[j] > target)
        {
            j--;
        }
        else if (nums[i] + nums[j] < target)
        {
            i++;
        }
        else
        {
            return {i, j};
        }
    }
    return {};
}

int main()
{
    vector<int> num = {2, 3, 6, 7};
    vector<int> result = pairsum(num, 13);
    cout << result[0] << ", " << result[1] << endl;
    return 0;
}