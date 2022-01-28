#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int tmp = n;
    n = m;
    m = tmp;

    cout << n << " " << m;

    return 0;
}