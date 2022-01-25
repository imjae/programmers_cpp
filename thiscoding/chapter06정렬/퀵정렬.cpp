#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int n = 10;
int arr[10] = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8};

void quickSort(int* arr, int start, int end) {
    if (start >= end) return; // ���Ұ� 1���� ��� ����
    int pivot = start; // �ǹ��� ù ��° ����
    int left = start + 1;
    int right = end;
    while (left <= right) {
        // �ǹ����� ū �����͸� ã�� ������ �ݺ�
        while (left <= end && arr[left] <= arr[pivot]) left++;
        // �ǹ����� ���� �����͸� ã�� ������ �ݺ�
        while (right > start && arr[right] >= arr[pivot]) right--;
        // �����ȴٸ� ���� �����Ϳ� �ǹ��� ��ü
        if (left > right) swap(arr[pivot], arr[right]);
        // �������� �ʾҴٸ� ���� �����Ϳ� ū �����͸� ��ü
        else swap(arr[left], arr[right]);
    }
    // ���� ���� ���� �κа� ������ �κп��� ���� ���� ����
    quickSort(arr, start, right - 1);
    quickSort(arr, right + 1, end);
}

int main(void) {
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
}