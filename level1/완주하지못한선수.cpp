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
            cout << "찾았다! : " << targetStr << endl;
            return true;
        }
    }
    return false;
}

// 완주하지 못한 선수
// 문제 설명
// 수많은 마라톤 선수들이 마라톤에 참여하였습니다. 단 한 명의 선수를 제외하고는 모든 선수가 마라톤을 완주하였습니다.

// 마라톤에 참여한 선수들의 이름이 담긴 배열 participant와 완주한 선수들의 이름이 담긴 배열 completion이 주어질 때, 완주하지 못한 선수의 이름을 return 하도록 solution 함수를 작성해주세요.

// 제한사항
// 마라톤 경기에 참여한 선수의 수는 1명 이상 100,000명 이하입니다.
// completion의 길이는 participant의 길이보다 1 작습니다.
// 참가자의 이름은 1개 이상 20개 이하의 알파벳 소문자로 이루어져 있습니다.
// 참가자 중에는 동명이인이 있을 수 있습니다.
// 입출력 예
// participant	completion	return
// ["leo", "kiki", "eden"]	["eden", "kiki"]	"leo"
// ["marina", "josipa", "nikola", "vinko", "filipa"]	["josipa", "filipa", "marina", "nikola"]	"vinko"
// ["mislav", "stanko", "mislav", "ana"]	["stanko", "ana", "mislav"]	"mislav"