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

    int target = 1;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > target) break;
        
        target += arr[i];
    }

    cout << target << endl;

    return 0;
}