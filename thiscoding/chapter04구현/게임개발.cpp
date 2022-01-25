#include <string>
#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void turn_left();

int mapX = 0;
int mapY = 0;

int curX = 0;
int curY = 0;
int direction = 0;

int map[50][50];
int hit[50][50];

enum Dir
{
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3
};

// 방향에 따른 이동좌표 정의 (북, 동, 남, 서)
int dirX[] = {-1, 0, 1, 0};
int dirY[] = {0, 1, 0, -1};

int main()
{
    int a[5][5];

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

    cin >> mapX >> mapY;
    cin >> curX >> curY >> direction;

    hit[curX][curY] = 1;

    int tmp;
    for (int i = 0; i < mapX; i++)
    {
        for (int j = 0; j < mapY; j++)
        {
            cin >> tmp;
            map[i][j] = tmp;
        }
    }

    int turnCount = 0;
    int cnt = 1;

    // 시작
    while (true)
    {
        turn_left();

        cout << "turn : " << direction << endl;

        int nx = curX + dirX[direction];
        int ny = curY + dirY[direction];

        // cout << "=======================" << endl;
        // cout << "nx : " << nx << "  ny : " << ny << endl;
        // cout << "map[nx][ny] : " << map[nx][ny] << endl;
        // cout << "hit[nx][ny] : " << hit[nx][ny] << endl;
        // cout << "=======================" << endl;

        if (map[nx][ny] == 0 && hit[nx][ny] == 0)
        {
            hit[nx][ny] = 1;
            curX = nx;
            curY = ny;
            cnt++;
            turnCount = 0;
            continue;
        }
        else
        {
            turnCount++;
        }

        if (turnCount == 4)
        {
            nx = curX - dirX[direction];
            ny = curY - dirY[direction];

            if (map[nx][ny] != 1)
            {
                curX = nx;
                curY = ny;
            }
            else
                break;
            turnCount = 0;
        }
    }

    cout << "결과 : " << cnt << endl;

    return 0;
}

void turn_left()
{
    direction -= 1;

    if (direction <= -1)
        direction = 3;
}