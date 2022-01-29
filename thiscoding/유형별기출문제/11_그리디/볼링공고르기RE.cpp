#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
// 각 볼링공 무게별 갯수를 저장하기 위한 배열
int arr[11];

int main()
{
    cin >> n >> m;
    for (int i = 0; i <= n; i++)
    {
        int x;
        cin >> x;
        arr[x] += 1;
    }

    int result = 0;

    for (int i = 1; i <= m; i++)
    {
        n = n - arr[i];
        result = result + arr[i] * n;
    }

    return 0;
}