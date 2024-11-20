#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

int main () {
  ifstream file;
  file.open("file.txt");
  if(file.fail()){
    cout << "Failed to open" << endl;
    return 1;
  }

  stringstream buffer;
  buffer << file.rdbuf();
  string file_contents;
  file_contents = buffer.str();
  cout << file_contents;
  file.close();

  return 0;
}
