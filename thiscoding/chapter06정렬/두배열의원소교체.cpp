#include <string>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int n, k;

vector<int> leftV;
vector<int> rightV;

int main()
{
  cin >> n >> k;

  for (int i = 0; i < n; i++)
  {
    int asdf;
    cin >> asdf;

    leftV.push_back(asdf);
  }
  for (int i = 0; i < n; i++)
  {
    int asdf;
    cin >> asdf;

    rightV.push_back(asdf);
  }

  sort(leftV.begin(), leftV.end());
  sort(rightV.begin(), rightV.end());

  int sumA = 0;
  int sumMinA = 0;
  int sumMaxB = 0;

  for (int i = 0; i < k; i++)
  {
    sumMinA += leftV[i];
    sumMaxB += rightV[n - i - 1];
  }

  for (int i = 0; i < n; i++)
    sumA += leftV[i];

  cout << (sumA - sumMinA + sumMaxB) << endl;

  return 0;
}