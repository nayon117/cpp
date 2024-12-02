#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  cin.ignore();
  while (t--)
  {

    string s, x;
    getline(cin, s, ' ');
    getline(cin, x);

    for (int i = 0; i < s.size(); i++)
    {

      bool isFoundX = true;

      for (int j = 0; j < x.size(); j++)
      {
        if (s[i + j] != x[j])
        {
          isFoundX = false;
          break;
        }
      }

      if (isFoundX)
      {
        s.replace(i, (x.size()), "#");
      }
    }
    cout << s << endl;
  }

  return 0;
}
