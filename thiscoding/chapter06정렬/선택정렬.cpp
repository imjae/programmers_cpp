#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int arr[] = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8};

int main()
{
    int len = sizeof(arr) / sizeof(int);

    for (int i = 0; i < len; i++)
    {
        int smallestIndex = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[smallestIndex] > arr[j])
                smallestIndex = j;
        }

        swap(arr[i], arr[smallestIndex]);
    }

    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";

    return 0;
}