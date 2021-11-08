#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands);

int main()
{
    vector<int> a = {1, 5, 2, 6, 3, 7, 4};
        
    vector<int> tmp1 = {2, 5, 3};
    vector<int> tmp2 = {4, 4, 1};
    vector<int> tmp3 = {1, 7, 3};

    vector<vector<int>> b = {tmp1, tmp2, tmp3};
    
    solution(a, b);

    return 0;
}

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for(auto it = commands.begin(); it != commands.end(); it++)
    {
        for(auto iter = it->begin(); iter != it->end(); iter++)
        {
            cout << *iter << endl;
        }
    }


    return answer;
}

// K��°��
// ���� ����
// �迭 array�� i��° ���ں��� j��° ���ڱ��� �ڸ��� �������� ��, k��°�� �ִ� ���� ���Ϸ� �մϴ�.

// ���� ��� array�� [1, 5, 2, 6, 3, 7, 4], i = 2, j = 5, k = 3�̶��

// array�� 2��°���� 5��°���� �ڸ��� [5, 2, 6, 3]�Դϴ�.
// 1���� ���� �迭�� �����ϸ� [2, 3, 5, 6]�Դϴ�.
// 2���� ���� �迭�� 3��° ���ڴ� 5�Դϴ�.
// �迭 array, [i, j, k]�� ���ҷ� ���� 2���� �迭 commands�� �Ű������� �־��� ��, commands�� ��� ���ҿ� ���� �ռ� ������ ������ �������� �� ���� ����� �迭�� ��� return �ϵ��� solution �Լ��� �ۼ����ּ���.

// ���ѻ���
// array�� ���̴� 1 �̻� 100 �����Դϴ�.
// array�� �� ���Ҵ� 1 �̻� 100 �����Դϴ�.
// commands�� ���̴� 1 �̻� 50 �����Դϴ�.
// commands�� �� ���Ҵ� ���̰� 3�Դϴ�.
// ����� ��
// array	commands	return
// [1, 5, 2, 6, 3, 7, 4]	[[2, 5, 3], [4, 4, 1], [1, 7, 3]]	[5, 6, 3]