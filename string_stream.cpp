/*
input:
Welcome to stringstream!
output:
Welcome
to
stringstream!
Welcome to stringstream! end
*/

#include <bits/stdc++.h>
using namespace std;

int main () {
  string s;
  getline(cin,s);

  stringstream str(s);
  string word;
  while(str >> word){
    cout << word <<endl;
  }
  cout << s << " " << "end" ;

  return 0;
}
