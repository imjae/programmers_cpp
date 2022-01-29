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

    int result = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int num = s[i] - '0';
        if (num <= 1 || result <= 1)
        {
            result += num;
        }
        else
        {
            result *= num;
        }
    }

    cout << result << endl;

    return 0;
}