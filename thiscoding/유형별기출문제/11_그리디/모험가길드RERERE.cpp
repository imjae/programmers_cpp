#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> arr;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    int count = 0;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        count += 1;
        if (arr[i] <= count)
        {
            count = 0;
            result += 1;
        }
    }

    cout << result << endl;

    return 0;
}
