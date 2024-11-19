/**
*input -
1 2 3
* output :-
1 3
 */
#include <bits/stdc++.h>
using namespace std;


int main()
{
  int x,y,z;
  cin >> x >> y >> z;

  int maximum = max({x,y,z});
  int minimum = min({x, y, z});
  cout << minimum << " " << maximum;
  return 0;
}
