#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int n;

int main()
{
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    int result = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count++;

        if (arr[i] <= count)
        {
            count = 0;
            result++;
        }
    }

    cout << result << endl;

    return 0;
}
