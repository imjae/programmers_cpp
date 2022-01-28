#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int h, m, s, n;
    cin >> h >> m >> s >> n;

    int y = h * 3600 + m * 60 + s + n;

    int hour = y / 3600 % 24;
    int min = y % 3600 / 60;
    int sec = y % 3600 % 60;

    cout << hour << " " << min << " " << sec;

    return 0;
}