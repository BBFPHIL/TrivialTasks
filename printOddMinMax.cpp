#include <iostream>

using namespace std;

void printOdd(int min, int max){

  int i = min;
  while(i<max){

    if(i == min && i % 2 == 0){

      i += 1;
      cout << i<<endl;

    }else{

      i += 2;
      cout << i <<endl;

    }
  }//end while                                                                                                             

}



int main(){

  printOdd(2, 11);

  return 0;


}
