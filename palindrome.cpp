#include <iostream>
using namespace std;

bool is_palindrome(string text) {
  for (int i = 0; i < text.length() / 2 ; i++){
    if(text[i] != text[text.length() - i - 1]){
      return false;
    }else {
      return true;
    }
  }
}

int main () {
  string a = "abccba";
  string b ="palindrome";

  if(is_palindrome(b)){
    cout << b << " is a palindrome";
  }else{
    cout << b << " is not a palindrome";
  }
  return 0;
}
