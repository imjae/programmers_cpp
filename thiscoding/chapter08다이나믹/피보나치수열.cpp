#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int arr[100];
int n;

int main()
{
    cin >> n;

    arr[1] = 1;
    arr[2] = 1;

    for (int i = 3; i < n + 1; i++)
    {
        arr[i] = arr[i - 2] + arr[i - 1];
    }

    cout << arr[n] << endl;

    return 0;
}