#include <string>
#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> split(string s, string divid);

int n;
string plans;
int x = 1, y = 1;

char moveTypes[4] = {'L', 'R', 'U', 'D'};
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int main()
{
    cin >> n;
    int a[n][n];
    cin.ignore();
    string str;

    getline(cin, plans);

    // vector<string> vec = split(str, " ");

    for(int i=0; i<plans.size(); i++)
    {
        char plan = plans[i];
        
        int nx = -1, ny = -1;

        for(int j=0; j<4; j++)
        {
            if(plan == moveTypes[j])
            {
                nx = x + dx[j];
                ny = y + dy[j];
            }
        }

        if(nx < 1 || ny < 1 || nx > n || ny > n) continue;
        
        x = nx;
        y = ny;
    }

    cout << x << " " << y << endl;

    return 0;
}

vector<string> split(string s, string divid)
{
    vector<string> v;
    char *c = strtok((char *)s.c_str(), divid.c_str());
    while (c)
    {
        v.push_back(c);
        c = strtok(NULL, divid.c_str());
    }
    return v;
}
