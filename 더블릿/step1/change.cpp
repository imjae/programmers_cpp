#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a;
    cin >> a;

    int num = 1000 - a;

    int b = num / 100;
    int c = num % 100 / 50;
    int d = num % 100 % 50 / 10;

    cout << b << " " << c << " " << d;

    return 0;
}