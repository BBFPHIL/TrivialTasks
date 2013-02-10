#include <iostream>

using namespace std;

//arrayMaxSize 
//Finds size of an array
//@param arr: array of integers
//

int arrayMaxSize(int* arr){

  int i = 0;
  //while element true
  while(arr[i]){
    
    i++;

  }

  //return count +1 
  return i+1;

}


//Testing Utility
int main(){

  int array[4] = {1,2,3,4};

  cout << arrayMaxSize(array)<<endl;


  return 0;

}
    
