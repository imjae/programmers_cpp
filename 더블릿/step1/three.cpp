#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << a * (b % 10) << endl;
    cout << a * floor((b % 100) * 0.1) << endl;
    cout << a * floor((b * 0.01)) << endl;
    cout << a * b << endl;

    return 0;
}