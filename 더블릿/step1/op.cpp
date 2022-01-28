#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << a << "+" << b << "=" << a + b << endl;
    cout << a << "-" << b << "=" << a - b << endl;
    cout << a << "*" << b << "=" << a * b << endl;
    cout << a << "/" << b << "=" << a / b << endl;
    cout << a << "%" << b << "=" << a % b << endl;

    return 0;
}