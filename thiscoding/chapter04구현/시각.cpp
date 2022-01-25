#include <string>
#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(int hour, int minute, int second);

int second = 60;
int minute = 60;
int hour = 0;
int result = 0;

int main()
{
    cin >> hour;


    for (int i = 0; i <= hour; i++)
    {
        for (int j = 0; j < minute; j++)
        {
            for (int k = 0; k < second; k++)
            {
                if (check(i, j, k))
                    result++;
            }
        }
    }

    cout << result << endl;

    return 0;
}

bool check(int hour, int minute, int second)
{
    if (hour % 10 == 3 || minute / 10 == 3 || minute % 10 == 3 || second / 10 == 3 || second % 10 == 3)
        return true;
    return false;
}