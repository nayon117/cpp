#include <bits/stdc++.h>
using namespace std;

int main()
{
  double angle1, angle2;
  cin >> angle1 >> angle2;

  if ((angle1 > 0 && angle1 < 180) && (angle2 > 0 && angle2 < 180) && ((angle1 + angle2) < 180))
  {
    double angle3 = 180 - angle1 - angle2;
    cout << angle3 << endl;
  }else{
    cout << "Invalid input" << endl;
  }

  return 0;
}
