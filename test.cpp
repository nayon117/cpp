/*
input:
5
13305
output:
12
*/

#include <bits/stdc++.h>
using namespace std;

int main () {
  int n;
  cin >> n;
  int arr[n+3];
  string str;
  cin >> str;

  for (int i = 0; i < n; i++){
    arr[i] = str[i] - '0';
   }
   int sum = 0;

  for (int i = 0; i < n; i++){
     sum += arr[i];
  }

  cout << sum;

  return 0;
}
