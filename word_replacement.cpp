/*
input:
I love programming and programming is fun
programming
output:
I love C++ and C++ is fun 
*/
#include <bits/stdc++.h>
using namespace std;

int main () {
  string sentence;
  string replace;

  getline(cin,sentence);
  cin >> replace;

  string word;
  stringstream str(sentence);
  while(str >> word ){
    if(word == replace){
      word.replace(0,(word.size()),"C++");
    }
    cout << word << " " ;
  }

  return 0;
}
