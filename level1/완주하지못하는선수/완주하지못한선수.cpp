#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

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
    string result;

    map<string, int> participantMap;

    for (auto it = participant.begin(); it != participant.end(); it++)
    {
        if (participantMap.find(*it) == participantMap.end())
        {
            participantMap.insert({*it, 1});
        }
        else
        {
            participantMap[*it] = participantMap[*it] + 1;
        }
    }

    for (auto it = completion.begin(); it != completion.end(); it++)
    {
        if (participantMap.find(*it) != participantMap.end())
        {
            // cout << "ã�Ҵ� : " << *it << endl;
            participantMap[*it] -= 1;
        }
    }

    for (auto it = participantMap.begin(); it != participantMap.end(); it++)
    {
        if (participantMap[it->first] > 0)
        {
            result = it->first;
        }
    }

    // cout << result << endl;

    return result;
}

// �������� ���� ����
// ���� ����
// ������ ������ �������� �����濡 �����Ͽ����ϴ�. �� �� ���� ������ �����ϰ��� ��� ������ �������� �����Ͽ����ϴ�.

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