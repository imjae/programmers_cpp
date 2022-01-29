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

    // result = (int)s[0] - 48;
    long long result = s[0] - '0';

    cout << result << endl;

    // 두 숫자가 1, 0, 음수일 떄는 더하는게 더 큰 값을 결과로 갖는다.

    for (int i = 0; i < s.size(); i++)
    {
        int num = s[i] - '0';
        if (num <= 1 || result <= 1)
            result += num;
        else
            result *= num;
    }
    // for (int i = 0; i < s.size() - 1; i++)
    // {
    //     if (result == 0 || s[i + 1] == '0')
    //         result += (int)s[i + 1] - 48;
    //     else
    //         result *= (int)s[i + 1] - 48;
    // }

    cout << result << endl;

    return 0;
}