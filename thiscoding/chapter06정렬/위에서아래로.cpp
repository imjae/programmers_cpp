#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

void quickSort(int *arr, int start, int end);

int l;

int main()
{
  cin >> l;

  int arr[l];

  int result[l];

  for (int i = 0; i < l; i++)
    cin >> arr[i];

  quickSort(arr, 0, l - 1);

  for (int i = 0; i < l; i++)
    result[i] = arr[l -1 - i];

  for (int i = 0; i < l; i++)
    cout << result[i];

  return 0;
}

void quickSort(int *arr, int start, int end)
{
  if (start >= end)
    return;          // ���Ұ� 1���� ��� ����
  int pivot = start; // �ǹ��� ù ��° ����
  int left = start + 1;
  int right = end;
  while (left <= right)
  {
    // �ǹ����� ū �����͸� ã�� ������ �ݺ�
    while (left <= end && arr[left] <= arr[pivot])
      left++;
    // �ǹ����� ���� �����͸� ã�� ������ �ݺ�
    while (right > start && arr[right] >= arr[pivot])
      right--;
    // �����ȴٸ� ���� �����Ϳ� �ǹ��� ��ü
    if (left > right)
      swap(arr[pivot], arr[right]);
    // �������� �ʾҴٸ� ���� �����Ϳ� ū �����͸� ��ü
    else
      swap(arr[left], arr[right]);
  }
  // ���� ���� ���� �κа� ������ �κп��� ���� ���� ����
  quickSort(arr, start, right - 1);
  quickSort(arr, right + 1, end);
}