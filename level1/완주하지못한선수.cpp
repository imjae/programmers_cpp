#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion);

int main()
{
    vector<string> participant;
    participant.push_back("leo");
    participant.push_back("kiki");
    participant.push_back("eden");

    vector<string> completion;
    completion.push_back("eden");
    completion.push_back("kiki");

    solution(participant, completion);
}

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";

    for_each(participant.begin(), participant.end(), [&](string& n){
        cout << n << endl;        //output : 1 2 3 4
    });

    return answer;
}




// �������� ���� ����
// ���� ����
// ������ ������ �������� �����濡 �����Ͽ����ϴ�. �� �� ���� ������ �����ϰ�� ��� ������ �������� �����Ͽ����ϴ�.

// �����濡 ������ �������� �̸��� ��� �迭 participant�� ������ �������� �̸��� ��� �迭 completion�� �־��� ��, �������� ���� ������ �̸��� return �ϵ��� solution �Լ��� �ۼ����ּ���.

// ���ѻ���
// ������ ��⿡ ������ ������ ���� 1�� �̻� 100,000�� �����Դϴ�.
// completion�� ���̴� participant�� ���̺��� 1 �۽��ϴ�.
// �������� �̸��� 1�� �̻� 20�� ������ ���ĺ� �ҹ��ڷ� �̷���� �ֽ��ϴ�.
// ������ �߿��� ���������� ���� �� �ֽ��ϴ�.
// ����� ��
// participant	completion	return
// ["leo", "kiki", "eden"]	["eden", "kiki"]	"leo"
// ["marina", "josipa", "nikola", "vinko", "filipa"]	["josipa", "filipa", "marina", "nikola"]	"vinko"
// ["mislav", "stanko", "mislav", "ana"]	["stanko", "ana", "mislav"]	"mislav"