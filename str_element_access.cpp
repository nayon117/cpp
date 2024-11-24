/*
input:
Programming
output:
First Char: P
Last Char: g
P r o g r a m m i n g 
*/
#include <bits/stdc++.h>
using namespace std;

int main () {
  string str;
  cin >> str;

  cout << "First Char: " << str.front() << endl;
  cout << "Last Char: " << str.back() << endl;

  for (int i = 0; i < str.size(); i++){
    cout << str.at(i) << " ";
  }

  return 0;
}
