#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

// 모험가의 수
int n;
vector<int> arr;

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int result = 0;
    int count = 0;

    for(int i=0; i<n; i++)
    {
        // 1 2 2 2 3 순의 모험가 배열 순환
        count++;

        // 현재 모험가의 공포도와 그룹의 인원수가 같아지면 그룹수 1 늘리고, 카운트 체크 0으로 초기화
        if(arr[i] <= count)
        {
            result++;
            count = 0;
        }
    }

    cout << result << endl;
    return 0;
}