/*
3
1.0 2.0 5.0
output:
2.6666667
*/
#include <bits/stdc++.h>
using namespace std;

int main () {
  int n;
  cin >> n;
  double point[n+3];

  double sum = 0 , avg = 0;
  for (int i = 0; i < n; i++){
    cin >> point[i] ;
     sum += point[i];
  }
  avg = sum / n;
  
   cout << fixed << setprecision(7) << avg;
  

  return 0;
}
