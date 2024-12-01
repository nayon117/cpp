/*
3
4
1 2 3 4
4
1 1 1 1
3
1 2 3

output:
0
2
-1
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    int even = 0;
    int odd = 0;

    if (n % 2 != 0)
    {
      cout << -1 << endl;
    }
    else
    {
      for (int i = 0; i < n; i++)
      {
        if (arr[i] % 2 == 0)
        {
          even++;
        }
        else
        {
          odd++;
        }
      }
      cout << abs((n / 2) - even) << endl;
    }
  }
  return 0;
}
