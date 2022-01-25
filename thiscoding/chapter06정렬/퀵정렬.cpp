#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

void qSort(vector<int> vec);
void vecPrint(vector<int> vec);

int main()
{
    vector<int> vec12 = {5, 7, 9, 0, 3, 1, 6, 2, 4, 8};
    qSort(vec12);

    cout << "#############최종##############" << endl;
    vecPrint(vec12);

    return 0;
}

void qSort(vector<int> vec)
{
    int s = vec.size();

    if (s == 1)
        return;

    if (s == 2)
    {
        if (vec[0] > vec[1])
            swap(vec[0], vec[1]);
        return;
    }

    int lIndex = 1, rIndex = s - 1;

    while (true)
    {
        for (int i = lIndex; i < s; i++)
        {
            if (vec[0] < vec[i])
            {
                lIndex = i;
                break;
            }
        }
        for (int i = rIndex; i >= 0; i--)
        {
            if (vec[0] >= vec[i])
            {
                rIndex = i;
                break;
            }
        }

        if (lIndex > rIndex)
        {
            if (rIndex == 0)
                break;
            swap(vec[0], vec[rIndex]);

            vecPrint(vec);
            cout << endl;
            break;
        }
        else
            swap(vec[lIndex], vec[rIndex]);

        vecPrint(vec);
        cout << endl;
    }

    if(rIndex == 0) rIndex = 1;

    vector<int> lVec(vec.begin(), vec.begin() + rIndex);
    vector<int> rVec(vec.begin() + rIndex + 1, vec.end());

    cout << "@@@ part별 최종 @@@" << endl;
    vecPrint(lVec);
    cout << " / ";
    vecPrint(rVec);
    cout << endl;

    qSort(lVec);
    qSort(rVec);
}

void vecPrint(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
}