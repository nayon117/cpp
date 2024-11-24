/*
input:
s1: Hello
s2: World
output:
After +=: HelloWorld
After append: HelloWorld
After replace: H***oWorld
After erase: HoWorld
After insert: C++HoWorld
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s1, s2;
  cin >> s1 >> s2;

  s1 += s2;
  s1.append(s2);
  s1.replace(1,3,"***");
  s1.erase(1, 3);
  s1.insert(0, "C++");

  cout << s1 << endl;

  return 0;
}
