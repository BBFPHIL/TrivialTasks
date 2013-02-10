#include <iostream>
#include <string>

using namespace std;

//isPallindrome
//Find if a string is a pallindrome or not
//@param p : pallindrome string
//

bool isPallindrome(string p){

  //Iterators 
  int i=0;//start at 1st
  int j = p.length()-1;//start at end
  
  //While not middle
  while(p[i] != p[j]){
    
    //check if left and right same
    if(p[i] == p[j]){
      
      continue;

    }else{
      //if not before middle meet, not pallindrome
      return false;
      break;

    }

    //iterate forward (i) back (j)
    i++;
    j--;
  
  }
  return true;
}



int main(){

  //string
  string p = "ksjdsjd";
  bool state = false;
  
  //Find if palindrome
  state = isPallindrome(p);
  
  //Output result
  if(state){
    cout << "This is a pallindrome!"<<endl;
  }else{
    cout << "Not a pallindrome!"<<endl;
  }
  
  return 0;

}
