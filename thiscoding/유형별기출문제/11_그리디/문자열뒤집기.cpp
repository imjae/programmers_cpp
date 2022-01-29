#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

string str;

int main()
{
    cin >> str;

    int changeCount = 0;

    for (int i = 0; i < str.size() - 1; i++)
    {
        int num = str[i] - '0';

        if (num != str[i + 1] - '0')
            changeCount++;
    }

    int result = 0;

    if (changeCount % 2 == 0)
        result = changeCount / 2;
    else
        result = changeCount / 2 + 1;

    cout << result << endl;

    return 0;
}