#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion);
bool FindString(vector<string> v, string targetStr);

int main()
{
    vector<string> participant;
    participant.push_back("mislav");
    participant.push_back("stanko");
    participant.push_back("mislav");
    participant.push_back("ana");

    vector<string> completion;
    completion.push_back("stanko");
    completion.push_back("ana");
    completion.push_back("mislav");

    solution(participant, completion);
}

string solution(vector<string> participant, vector<string> completion)
{
    string answer = "";

    vector<string>::iterator it;

    for (it = participant.begin(); it != participant.end(); )
    {
        if (FindString(completion, *it))
        {
            it = participant.erase(it);
        }
        else {
            it++;
        }
    }

    for_each(participant.begin(), participant.end(), [&](string &n)
    {
        cout << n << endl;        //output : 1 2 3 4 });
    });

    return answer;
}

bool FindString(vector<string> v, string targetStr)
{
    bool result;

    for (int i = 0; i < v.size(); i++)
    {
        if (targetStr.compare(v[i]) == 0)
        {
            cout << "ã�Ҵ�! : " << targetStr << endl;
            return true;
        }
    }
    return false;
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