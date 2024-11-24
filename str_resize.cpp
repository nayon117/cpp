/*
input:
HelloWorld
output:
Original Size : 10 Capacity : 15
 After shrinking Hello 5
After Expanding Hello##### 10
*/
#include <bits/stdc++.h>
using namespace std;

int main () {

  string str = "HelloWorld";
  cout << "Original Size : " << str.size()<< " " << "Capacity : " << str.capacity() << endl;

  str.resize(5);
  cout <<" After shrinking " << str << " " << str.size() << endl;

  str.resize(10,'#');
  cout << "After Expanding " << str << " " << str.size() << endl;

  return 0;
}
