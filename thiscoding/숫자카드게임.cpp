#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int GetMin(vector<int> target);

int main()
{
    vector<int> a = {3, 1, 2};
    vector<int> b = {4, 1, 4};
    vector<int> c = {2, 2, 2};

    vector<vector<int>> g = {{3, 1, 2}, {4, 1, 4}, {2, 2, 2}};

    int n = 3, m = 3;

    vector<int> d(n);
    for (int i = 0; i < n; i++)
    {
        int len = g[i].size();
        int smallest = g[i][0];

        for (int j = 1; j < len; j++)
        {
            smallest = min(smallest, g[i][j]);
        }
        d.push_back(smallest);
    }

    int len = d.size();
    int largest = d[0];
    for (int i = 1; i < len; i++)
    {
        largest = max(largest, d[i]);
    }

    cout << largest;

    return 0;
}
