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

int n, target;
vector<int> arr;

int main(void) {
    // n(원소의 개수)와 target(찾고자 하는 값)을 입력받기 
    cin >> n >> target;
    // 전체 원소 입력받기 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    // 이진 탐색 수행 결과 출력 
    int result = binarySearch(arr, target, 0, n - 1);
    if (result == -1) {
        cout << "djkfdjkfdjk" << '\n';
    }
    else {
        cout << result + 1 << '\n';
    }
  return 0;
}