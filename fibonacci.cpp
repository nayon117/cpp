#include <bits/stdc++.h>
using namespace std;

int main () {
  int term1 = 0;
  int term2 = 1;
  int n = 0;
  int nextTerm = 0;

  cin >> n;

  if(n<=2){
    return 1;
  }
  cout << term1 << ", " << term2 << ", ";
  for (int i = 3; i <= n; i++){
    nextTerm = term1 + term2;
    cout << nextTerm;
    if(i != n) cout << ", ";
    term1 = term2;
    term2 = nextTerm;
  }
  cout << endl;
  return 0;
}
