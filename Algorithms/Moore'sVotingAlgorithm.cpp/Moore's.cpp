#include <iostream>
#include <vector>
using namespace std;

int MooresAlgorithm(vector<int> nums)
{
    int n = nums.size();
    int freq = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 4, 4, 5, 4, 5, 4, 4};
    cout << MooresAlgorithm(nums);

    return 0;
}