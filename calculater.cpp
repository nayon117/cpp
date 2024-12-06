/**
 *input - 5 10
 * output :- 
 5 + 10 = 15
 5 * 10 = 50
 5 - 10 = -5
 */
#include <bits/stdc++.h>
using namespace std;

int main () {
  long long int x, y;
  cin >> x >> y;
  
  cout << x << " " << "+"<< " " << y << " = " << x + y << endl;
  cout << x << " " << "*" << " " << y << " = " << x * y << endl;
  cout << x << " "<< "-" << " " << y << " = " << x - y;
  return 0;
}
