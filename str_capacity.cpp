#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "hello";
  str.push_back('A');
  cout << str.size() << " " << str.capacity() << endl;
  str.push_back('B');
  cout << str.size() << " " << str.capacity() << endl;

  cout << "...." << endl;
  str.pop_back();
  cout << str.size() << " " << str.capacity() << endl;
  str.pop_back();
  cout << str.size() << " " << str.capacity() << endl;
  str.pop_back();
  cout << str.size() << " " << str.capacity() << endl;
  str.pop_back();
  cout << str.size() << " " << str.capacity() << endl;
  str.pop_back();
  cout << str.size() << " " << str.capacity() << endl;
  str.pop_back();
  cout << str.size() << " " << str.capacity() << endl;
  str.pop_back();
  cout << str.size() << " " << str.capacity() << endl;
 

  return 0;
}
