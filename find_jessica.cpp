#include <bits/stdc++.h>
using namespace std;

int main () {
  string str;
  getline(cin,str);

  stringstream ss (str);
  string word;
  bool isFindJessica = 0;
  while(ss >> word){
    if(word == "Jessica"){
      isFindJessica = 1;
      break;
    }
  }
  if(isFindJessica) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
