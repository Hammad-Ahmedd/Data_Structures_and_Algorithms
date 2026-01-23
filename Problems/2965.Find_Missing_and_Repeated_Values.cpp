#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
{
    vector<int> ans(grid.size() * grid[0].size());
    int idx = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            ans[idx++] = grid[i][j];
        }
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] != ans[i + 1])
        {
            return {i, i + 1};
        }
    }
    return {};
}

int main()
{
    vector<vector<int>> grid = {{1, 3}, {2, 2}};
    vector<int> result = findMissingAndRepeatedValues(grid);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
    }
    return 0;
}