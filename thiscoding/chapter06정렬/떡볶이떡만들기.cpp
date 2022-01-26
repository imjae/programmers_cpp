#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<int> arr;

int main()
{
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    arr.push_back(x);
  }
  sort(arr.begin(), arr.end());

  vector<int> r;

  int t = 0;
  for (int i = arr[n - 1]; i >= arr[0]; i--)
  {
    for (int j = 0; j < n; j++)
    {
      int s = arr[j] - i;
      if (s > 0)
        t += s;
    }

    if (t >= m)
    {
      cout << "result : " <<  i << endl;
      break;
    }
    t = 0;
  }

  // vector<int>::iterator iter_begin = r.begin(); // 첫번째 원소 위치
  // vector<int>::iterator iter_end = r.end();     // 마지막 원소 다음 위치

  // for (; iter_begin != iter_end; ++iter_begin) // 증감 연산자로 순회 가능
  //   cout << *iter_begin << endl;               // 포인터처럼 역참조 연산으로 실제 값을 참조한다.

  return 0;
}