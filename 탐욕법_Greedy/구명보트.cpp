#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit)
{
    int answer = 0;

    sort(people.begin(), people.end());

    int left = 0, right = people.size() - 1;

    while (left <= right)
    {
        if (people[left] + people[right] <= limit)
            left++;

        right--;
        answer++;
    }

    return answer;
}

vector<int> people;
int limit;

int main()
{
    people = {70, 50, 80, 50};
    limit = 100;

    int a = solution(people, limit);

    cout << "a : " << a << endl;

    return 0;
}