/*
2
11111110
10101010101010
output:
Bad
Good
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string str;
  cin.ignore();

  for (int i = 0; i < n; i++)
  {
    getline(cin, str);
    bool isGood = false;

    for (int j = 0; j < str.size() - 2; j++)
    {
      if ((str.substr(j, 3) == "101" || str.substr(j, 3) == "010"))
      {
        isGood = true;
        break;
      }
    }
    if (isGood)
      cout << "Good" << endl;
    else
      cout << "Bad" << endl;
  }

  return 0;
}
