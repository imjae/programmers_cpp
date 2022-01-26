#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> arr;
int d[101];

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    d[0] = arr[0];
    d[1] = max(arr[0], arr[1]);
    for (int i = 2; i < n + 1; i++)
    {
        d[i] = max(d[i - 1], arr[i] + d[i - 2]);
    }

    cout << d[n-1] << endl;

    return 0;
}