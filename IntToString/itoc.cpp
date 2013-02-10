//Phillip Walker
//Objective(s): Converting integer to string
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//itoc
//@param number: Number to convert to string
//

string itoc(int number){

  string s;
  stringstream out;
  out << number; // feed int to stringstream
  s = out.str(); //convert out to str() func

  return s;
}


int main(){

  int num = 73;
  
  string str = itoc(73);

  cout << "Length of string is " << str.length() << endl;


  return 0;
}
