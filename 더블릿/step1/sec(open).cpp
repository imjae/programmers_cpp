#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int s;
    cin >> s;

    int a,b,c,d;

    a = s / (60 * 60 * 24);
    b = (s % (60 * 60 * 24)) / (60 * 60);
    c = ((s % (60 * 60 * 24)) % (60 * 60)) / 60;
    d = ((s % (60 * 60 * 24)) % (60 * 60)) % 60;

    cout << a << " " << b << " " << c << " " << d;
    
    return 0;
}