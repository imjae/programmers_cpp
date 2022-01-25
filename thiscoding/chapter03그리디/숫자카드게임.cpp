#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int GetMin(vector<int> target);
int GetMax(vector<int> target);

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
        d.push_back(GetMin(g[i]));
    }

    cout << GetMax(d);

    return 0;
}

int GetMin(vector<int> target)
{
    int len = target.size();
    int smallest = target[0];

    for(int i=1; i<len; i++)
    {
        smallest = min(smallest, target[i]);
    }

    return smallest;
}

int GetMax(vector<int> target)
{
    int len = target.size();
    int largest = target[0];

    for(int i=1; i<len; i++)
    {
        largest = max(largest, target[i]);
    }

    return largest;
}
