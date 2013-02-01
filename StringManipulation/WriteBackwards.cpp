//Phillip Walker
//Objective(s): Write a string backwards recursively
//

#include <iostream>

using namespace std;

/*
 @post None
 @param: s The String to write back
 @param: size the length of s
*/

int i=0;
void writeBackward(string s, int size){
  
  if(size > 0){
    i++;
    cout << "Writing string number: " << i <<endl;
    cout << s.substr(size-1, 1);
    cout <<endl;
    
    writeBackward(s, size-1);//Point A
  }//end if
  //base case is do nothing when size == 0
}



int main(){


  writeBackward("Phillip", 7);
  cout << endl;

  return 0;
}
