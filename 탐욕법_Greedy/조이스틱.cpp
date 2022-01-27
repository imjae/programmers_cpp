#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string name)
{
    int answer = 0;

    int n = name.size();
    
    int a_size = 0;
    int a_start = 0;
    int a_end = 0;

    for(int i=0; i<n; i++)
    {
        int s = 0, e = 0;
        if(name[i] == 'A') a_size++;

        
    }


    return answer;
}

int main()
{
    string name = "BBAAAB";

    solution(name);

    int a = 'B' - 'A';
    int b = 'Z' - 'Y';

    // cout << a << " / " << b << endl;

    return 0;
}