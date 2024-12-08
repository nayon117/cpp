/*
5 3
1 5 4 3 2
5 
3
6
output:
Found
Found
Not Found
*/
#include <bits/stdc++.h>
using namespace std;

int main () {
  int n,m;
  cin >> n >> m;
  int arr[n];

  for (int i = 0; i < n; i++){
   cin >> arr[i]; 
  }

  for (int i = 0; i < m; i++){
    int x;
    cin >> x;
    int flag = 0;
    for (int i = 0; i < n; i++){
      if(arr[i] == x) {
        flag = 1;
      }
    }
    if(flag == 1) cout << "Found" << "\n";
    else cout << "Not Found" << "\n";
  }

  return 0;
}
