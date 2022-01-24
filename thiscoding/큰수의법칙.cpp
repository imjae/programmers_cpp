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

    int first = a[n - 1];
    int second = a[n - 2];
    int cnt = 1;

    int result = 0;

    while (cnt <= 8)
    {
        if (cnt % k == 0)
            result += second;
        else
            result += first;

        cnt++;
    }

    cout << "result : " <<  result << endl;

    // 두번째 반복되는 수열에 대해 파악 후, 반복문 사용하지 않고 계산
    int count = 0;

    count = (int)(m / (k + 1)) * k;
    count += m % (k + 1);

    // count는 가장 큰수를 더할 수있는 횟수

    int result2 = 0;
    result2 = first * count;
    result2 += (m - count) * second;

    cout << "result2 : " << result2 << endl;
    return 0;
}