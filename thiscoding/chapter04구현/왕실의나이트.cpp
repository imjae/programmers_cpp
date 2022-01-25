#include <string>
#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(int x, int y, int size);

string inputData;

int dx[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dy[] = {1, -1, 1, -1, 2, -2, 2, -2};

int result = 0;


int main()
{
    cin >> inputData;

    int x = inputData[0] - 'a' + 1;
    int y = inputData[1] - '1' + 1;

    for(int i=0; i<8; i++)
    {
        int tmpX = x + dx[i];
        int tmpY = y + dy[i];

        if(check(tmpX, tmpY, 8)) result++;
    }

    cout << result << endl;
    return 0;
}

bool check(int x, int y, int size)
{
    if(x < 1 || y < 1 || x >= size || y >= size)
        return false;

    return true;
}