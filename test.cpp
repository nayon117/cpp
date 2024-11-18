#include <bits/stdc++.h>
using namespace std;

int main () {
  /*
  int total = 0;
  cin >> total;

  vector<int> data(total);

  for (int i = 0; i < total; i++){
      cin >> data[i];
  }
  */
 vector<int> data;
 int i=0;
 int value = 0;
 while(true){
  cout << "Element" << i << ": ";
  cin >>value;
  if(value == -1){
    break;
  }
  data.push_back(value);
  i++;
 }


  for(auto elem:data){
    cout << elem << " ";
  }
    cout <<endl;
  return 0;
}
