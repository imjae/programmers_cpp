#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<int> &arr, int target, int start, int end)
{
  if (start > end)
    return -1;

  int mid = (start + end) / 2;

  if (arr[mid] == target)
    return mid;
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

  int total = 0;
  int start = 0, end = arr[n - 1];
  int result = 0;

  cout << start << " | " << end << endl;

  while (start < end)
  {
    total = 0;
    int mid = (int)((start + end) / 2);

    for (int i = 0; i < n; i++)
    {
      int q = arr[i] - mid;
      if (q > 0)
        total += q;
    }

    if (total == m)
    {
      result = mid;
      break;
    }

    if (total < m) end = mid - 1;
    else start = mid + 1;
  }

  cout << result << endl;

  return 0;
}