/*
input:
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

output:
word
l10n
i18n
p43s
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string str;
  for (int i = 0; i < n; i++)
  {
    cin >> str;
    if (str.size() > 10)
    {
      cout << str.front() << (str.size() - 2) << str.back() << endl;
    }
    else
    {
      cout << str << endl;
    }
  }

  return 0;
}
