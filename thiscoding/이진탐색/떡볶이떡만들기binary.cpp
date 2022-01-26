#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<int>& arr, int target, int start, int end)
{
  if (start > end) return -1;

  int mid = (start + end) / 2;

  if (arr[mid] == target) return mid;
  else
  {
    if (target > arr[mid])
      start = mid + 1;
    else
      end = mid - 1;
  }

  return binarySearch(arr, target, start, end);
}

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

  return 0;
}