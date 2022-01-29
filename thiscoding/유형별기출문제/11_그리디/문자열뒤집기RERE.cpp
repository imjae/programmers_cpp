#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

string str;

int count0;
int count1;

int main()
{
    cin >> str;

    if (str[0] == '0')
        count0 += 1;
    else
        count1 += 1;

    for (int i = 0; i < str.size() - 1; i++)
    {
        if (str[i] != str[i + 1])
        {
            if (count0 > count1)
                count1 += 1;
            else
                count0 += 1;
        }
    }

    int result = min(count0, count1);

    cout << result << endl;

    return 0;
}