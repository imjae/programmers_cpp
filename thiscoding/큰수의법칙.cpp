#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> a = {2, 4, 5, 4, 6};

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i];
    }

    cout << endl;

    sort(a.begin(), a.end());

    int n = 5, m = 8, k = 3;

    int first = a[n-1];
    int second = a[n-2];
    int cnt = 1;

    int result = 0;

    while(cnt <= 8)
    {
        if(cnt % k == 0)
            result += second;
        else
            result += first;
        
        cnt++;
    }

    cout << result << endl;

    return 0;
}