#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int binary_search(vector<int> &arr, int target, int start, int end)
{
  if (start > end)
    return -1;

  int mid = (int)((start + end) / 2);

  if (arr[mid] == target)
    return mid;
  else
  {
    if (target > arr[mid])
      start = mid + 1;
    else
      end = mid - 1;
  }

  return binary_search(arr, target, start, end);
}

int n, m;
vector<int> uList;
vector<int> rList;

int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    uList.push_back(x);
  }
  sort(uList.begin(), uList.end());

  cin >> m;
  for (int i = 0; i < m; i++)
  {
    int x;
    cin >> x;
    rList.push_back(x);
  }
  sort(rList.begin(), rList.end());

  string result;
  for (int i = 0; i < m; i++)
  {
    if(binary_search(uList, rList[i], 0, n-1) != -1)
      result += "yes ";
    else
      result += "no ";
  }

  cout << result;

  return 0;
}