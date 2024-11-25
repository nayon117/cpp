/*
input:
2
ipAsu ccsit
ey gpt
output:
icpcAssiut
egypt
*/

#include <bits/stdc++.h>
using namespace std;

int main () {
  int n;
  cin >> n;
  cin.ignore();
  for (int i = 0; i < n; i++){
   string str;
   getline(cin,str); 
   stringstream ss(str);
   string s,t;
   ss >> s >> t;
   string result = "";

  for (int j = 0; j < max(s.size(),t.size()); j++){
    if(j < s.size()) result += s[j];
    if(j < t.size()) result += t[j];
  }
  cout << result << endl;
  }
  return 0;
}
