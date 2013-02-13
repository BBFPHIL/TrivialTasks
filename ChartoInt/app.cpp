#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int ctoi(string s){

  int n;
  istringstream ( s ) >> n;
  
  return n;

}

int main(){
  
  string str = "200";

  string str2 = "50";

  cout << ctoi(str) + ctoi(str2) <<endl;
  



};
