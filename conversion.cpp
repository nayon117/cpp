#include <bits/stdc++.h>
using namespace std;

int main()
{

  string str;
  getline(cin, str);

  for (int i = 0; i < str.size(); i++)
  {
    if (isupper(str[i])) str[i] = tolower(str[i]);
    else str[i] = toupper(str[i]);

    if (str[i] == ',') str[i] = ' ';

    cout << str[i];
  }
  return 0;
}
