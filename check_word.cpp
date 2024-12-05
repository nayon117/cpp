#include <bits/stdc++.h>
using namespace std;

int main () {
  string sentence;
  string checkWord;
  getline(cin,sentence);
  cin >> checkWord;

  int count = 0;

  stringstream ss(sentence);
  string word ;

  while(ss >> word){
    if(word == checkWord){
      count ++;
    }
  }
  cout << count << endl;

  return 0;
}
