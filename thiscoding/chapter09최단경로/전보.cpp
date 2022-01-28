#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

#define INF 1e9 // 무한을 의미하는 값으로 10억을 설정

using namespace std;

// 도시 개수, 통로 개수, 메시지 보내고자하는 도시
int n, m, c;

int x, y, z;

vector<pair<int, int>> graph[30001];
// 최단거리 테이블
int d[30001];

void dijkstra(int start)
{
    priority_queue<pair<int, int>> pq;

    pq.push({0, start});
    d[start] = 0;

    while (!pq.empty())
    {
        int dist = -pq.top().first;
        int now = pq.top().second;
        pq.pop();

        if (d[now] < dist)
            continue;

        for (int i = 0; i < graph[now].size(); i++)
        {
            int cost = graph[now][i].second;

            if (cost < d[graph[now][i].first])
            {
                d[graph[now][i].first] = cost;
                pq.push(make_pair(-cost, graph[now][i].first));
            }
        }
    }
}

int main()
{
    cin >> n >> m >> c;

    // 모든 간선 정보 입력받기
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        // a번 노드에서 b번 노드로 가는 비용이 c
        graph[a].push_back({b, c});
    }

    // 최단 거리 테이블을 모두 무한으로 초기화
    fill(d, d + 30001, INF);

    // 다익스트라 알고리즘 수행
    dijkstra(c);

    // 도달할 수 있는 노드 개수
    int count = 0;
    // 도달 할 수 있는 노드 중에서, 가장 멀리 있는 노드와의 최단 거리
    int maxDistance = 0;
    for (int i = 1; i <= n; i++)
    {
        // 도달할 수 있는 노드인 경우
        if (d[i] != INF)
        {
            count++;
            maxDistance = max(maxDistance, d[i]);
        }
    }

    // 시작 노드는 제외해야 하므로 count - 1을 출력
    cout << count - 1 << ' ' << maxDistance << '\n';

    return 0;
}