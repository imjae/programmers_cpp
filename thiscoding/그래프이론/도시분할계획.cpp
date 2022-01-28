#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

// 집의 갯수N, 길의 갯수 M
int n, m;
int parent[1000001];

// 모든 간선을 담을 리스트와, 최종 비용을 담을 변수
vector<pair<int, pair<int, int>>> edges;
int result;

int findParent(int x)
{
    // 루트 노드가 아니라면, 루트 노드를 찾을때까지 재귀적으로 호출
    if (x == parent[x])
        return x;
    return parent[x] = findParent(parent[x]);
}

void unionParent(int a, int b)
{
    a = findParent(a);
    b = findParent(b);
    if (a < b)
        parent[b] = a;
    else
        parent[a] = b;
}

int main()
{
    cin >> n >> m;

    // 부모 테이블상에서 부모를 자기 자신으로 초기화
    for (int i = 1; i <= n; i++)
        parent[i] = i;

    // 모든 간선에 대한 정보 입력받기
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edges.push_back({c, {a, b}});
    }

    // 간선을 비용 순으로 정렬
    sort(edges.begin(), edges.end());

    int last = 0;
    // 간선을 하나씩 확인하며
    for(int i=0; i<edges.size(); i++)
    {
        int cost = edges[i].first;
        int a = edges[i].second.first;
        int b = edges[i].second.second;

        // 사이클이 발생하지 않는 경우에만 집합에 포함
        if(findParent(a) != findParent(b))
        {
            unionParent(a, b);
            result += cost;
            
            // 간선이 연결된 애들중에서 가장 큰 값을 빼줘야 함.
            last = cost;
        }
    }

    cout << result - last << endl;

    return 0;
}