#include <string>
#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> split(string s, string divid);

int main()
{
    int n = 5;

    int a[5][5];

    int x = 1, y = 1;

    string str;

    getline(cin, str);

    vector<string> vec = split(str, " ");

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == "L" && y != 1)
        {
            y -= 1;
        }
        else if (vec[i] == "R" && y != 5)
        {
            y += 1;
        }
        else if (vec[i] == "U" && x != 1)
        {
            x -= 1;
        }
        else if (vec[i] == "D" && x != 5)
        {
            x += 1;
        }
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
