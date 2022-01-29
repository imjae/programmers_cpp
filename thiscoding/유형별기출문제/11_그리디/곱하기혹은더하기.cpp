#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

string s;
int result = 0;

int main()
{
    cin >> s;

    result = (int)s[0] - 48;

    cout << result << endl;

    for (int i = 0; i < s.size() - 1; i++)
    {
        if (result == 0 || s[i + 1] == '0')
            result += (int)s[i + 1] - 48;
        else
            result *= (int)s[i + 1] - 48;
    }

    cout << result << endl;

    return 0;
}