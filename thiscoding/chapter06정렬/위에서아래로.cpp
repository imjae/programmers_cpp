#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> v;

bool compare(int a, int b) {
    return a > b;
}

int main(void) {
    // N�� �Է¹ޱ�
    cin >> n;

    // N���� ������ �Է¹޾� ����Ʈ�� ����
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // �⺻ ���� ���̺귯���� �̿��Ͽ� �������� ���� ����
    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }
}