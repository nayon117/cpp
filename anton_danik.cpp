/*
input:
6
DADADA
output:
Friendship
*/

#include <bits/stdc++.h>
using namespace std;

int main () {
  int n;
  cin >> n;
  string str;

  int antonCount = 0;
  int danikCount = 0;

  for (int i = 0; i < n; i++){
    cin >> str;
    if(str[i] == 'A') antonCount ++;
    else danikCount ++;
  }

  if(antonCount > danikCount) cout << "Anton" << endl;
  else if (danikCount > antonCount) cout << "Danik"<< endl;
  else cout << "Friendship" << endl;

  return 0;
}
