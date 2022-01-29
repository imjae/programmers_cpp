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

    int count;
    for (int i = 0; i < str.size() - 1; i++)
    {
        if(str[i] != str[i+1]) count++;
    }

    int result = 0;
    if(count % 2 == 0) result = count / 2;
    else result = count / 2 + 1;

    cout << result << endl;

    return 0;
}