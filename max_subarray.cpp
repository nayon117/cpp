/*
8
-1 2 4 -3 5 2 -5 2
output:
10
*/
#include <bits/stdc++.h>
using namespace std;

int main () {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++){
   cin >> arr[i]; 
  }
  int best = 0, sum = 0;
  for (int i = 0; i < n; i++){
    sum = max(arr[i], sum + arr[i]);
    best = max(best,sum);
  }
  cout << best << "\n";

  return 0;
}
