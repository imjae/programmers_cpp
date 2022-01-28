#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

#define INF 1e9 // 무한을 의미하는 값으로 10억을 설정
using namespace std;

// 노드의 개수, 간선의 개수
int n, m;
// 2차원 배열 (그래프 표현) 만들기
int graph[101][101];

int main()
{
    cin >> n >> m;

    // 최단 거리 테이블을 모두 무한으로 초기화
    for (int i = 0; i < 101; i++)
        fill(graph[i], graph[i] + 101, INF);

    // 자기 자신에게 자기 자신으로 가는 비용은 0으로 초기화
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            graph[i][j] = 0;
        }
    }

    // 각 간선에 대한 정보를 입력받아, 그 값으로 초기화
    for (int i = 0; i < m; i++)
    {
        // A에서 B로 가는 비용은 1라고 설정
        int a, b;
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    // 거쳐 갈 노드 x와 최종 목적지 노드k를 입력받기
    int x, k;
    cin >> x >> k;


    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                graph[j][k] = min(graph[j][k], graph[j][i] + graph[i][k]);
            }
        }
    }

    int distance = graph[1][k] + graph[k][x];

    if (distance >= INF)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << distance << endl;
    }


    return 0;
}