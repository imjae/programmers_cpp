#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

#define INF 1e9 // 무한을 의미하는 값으로 10억을 설정

using namespace std;

// 노드의 개수(N), 간선의 개수(M), 시작 노드 번호(Start)
// 노드의 개수는 최대 100,000개 라고 가정
int n, m, start;
// 각 노드에 연결되어 있는 노드에 대한 정보를 담는 배열
vector<pair<int, int>> graph[100001];
// 최단거리 테이블 만들기
int d[100001];

void dijkstra(int start)
{
    // 큐는 우선순위에 해당하는 노드들을 저장함.
    priority_queue<pair<int, int>> pq;
    // 시작노드로 가기위한 최단 경로는 0으로 설정.
    pq.push({0, start});
    d[start] = 0;

    // 큐가 비어있다면 반복문 종료
    while (!pq.empty())
    {
        // 가장 최단 거리가 짧은 노드에 대한 정보 꺼내기
        int dist = pq.top().first * -1; // 현재 노드까지의 비용 (-1 곱해 실제값으로 변경)
        int now = pq.top().second;      // 현재 노드
        pq.pop();

        if (d[now] < dist)
            continue;

        for (int i = 0; i < graph[now].size(); i++)
        {
            int cost = dist + graph[now][i].second;
            // 현재 노드를 거쳐서, 다른 노드로 이동하는 거리가 더 짧은 경우
            if (cost < d[graph[now][i].first])
            {
                d[graph[now][i].first] = cost;
                pq.push({-cost, graph[now][i].first});
            }
        }
    }
}

int main()
{
    cin >> n >> m >> start;

    // 모든 간선 정보를 입력받기
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        // a번 노드에서 b번 노드로 가는 비용이 c라는 의미
        graph[a].push_back({b, c});
    }
    // 최단 거리 테이블을 모두 무한으로 초기화
    fill(d, d + 100001, INF);

    // 다익스트라 알고리즘 수행
    dijkstra(start);

    // 모든 노드로 가기 위한 최단 거리를 출력
    for (int i = 1; i <= n; i++)
    {
        // 도달할 수 없는 경우, 무한(INFINITY)이라고 출력
        if (d[i] == INF)
        {
            cout << "INFINITY" << '\n';
        }
        // 도달할 수 있는 경우 거리를 출력
        else
        {
            cout << d[i] << '\n';
        }
    }

    return 0;
}