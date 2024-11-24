/*
input:
NonEmpty
output:
string is not empty
After clearing: String is empty
*/
#include <bits/stdc++.h>
using namespace std;

int main () {
  string str;
  cin >> str;
  if(str.empty()) cout << "String is empty" << endl;
  else cout << "string is not empty" << endl;

  str.clear();
  if(str.empty()) cout << "After clearing: " << "String is empty" << endl;
  else cout << "After clearing: "  << "string is not empty" << endl;
  return 0;
}
