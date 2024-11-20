#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

int main () {
  ifstream file;
  string filename;
  int line_number;
  cin >> filename;
  cin >> line_number;

  if(line_number <= 0){
    cout << "Line number must be greate than 0" << endl;
    return 1;
  }

  file.open(filename);
   if(file.fail()){
    cout << "Failed to open" << endl;
    return 1;
  }

  int current_line = 0;
  string line;
  while(!file.eof()){
    current_line++;
    getline(file,line);
    if(current_line == line_number) break;
  }

  if(current_line < line_number){
    cout << "line not found" << endl;
    cout << "File contains" << current_line;
    cout << "Line totals" << endl;
  }
  else cout << "line: " << line << endl;
  file.close();
  
  return 0;
}
