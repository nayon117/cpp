#include <bits/stdc++.h>
using namespace std;

int main () {
  string str;
  cin >> str;

  // sort (str.rbegin(),str.rend());
  // sort(str.begin(),str.end());
  
  for(char &c:str){
    c = toupper(c);
  }

  cout << str;

  return 0;
}
