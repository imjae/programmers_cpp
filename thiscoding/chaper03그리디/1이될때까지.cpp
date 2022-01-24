#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n = 17, k = 4;

    int count = 1;
    while(true)
    {
        if(n % k == 0)
            n = n/k;
        else
            n -= 1;

        if(n == 1) break;

        count++;
    }

    cout << count;
    return 0;
}