#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

// n+1개의 팀, m은 연산 횟수
int n, m;

int findParent(int parent[], int x)
{
    if (x == parent[x])
        return x;

    return parent[x] = findParent(parent, parent[x]);
}

void unionParent(int parent[], int a, int b)
{
    a = findParent(parent, a);
    b = findParent(parent, b);
    if(a < b)
        parent[b] = a;
    else
        parent[a] = b;
}

int main()
{
    cin >> n >> m;
    int parent[n + 1];

    for (int i = 1; i < n + 1; i++)
        parent[i] = i;

    for (int i = 0; i < m; i++)
    {
        // a: 연산종류 b,c:학생번호
        int a, b, c;
        cin >> a >> b >> c;

        bool isSame = false;

        if(a == 0)
            unionParent(parent, b, c);
        else
        {
            if(findParent(parent, b) == findParent(parent, c))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}