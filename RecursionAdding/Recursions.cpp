#include <iostream>

using namespace std;

//sum
//Recurisvely add up all the numbers in an array
//@param n[]: int array
//@param total: running total
//@param i: index starts at n-1

void sum(int n[], int total, int i){
  
  if(i==0){//basse case
    
    //Add last digit
    total = total+ n[i];
    cout<<"Final Total: " << total <<endl;

  }else{
    
    cout << total << " Running total"<<endl;
    //running total
    total = total + n[i];
    
    //recusively call func
    sum(n, total, i-1);
    
  }
}

//factorial
//Recursively find the factorial of a number
//@param n: factorial number
//
int factorial(int n){
  
  //Base case
  if(n == 0){
    return(1);
  }
  else{
    cout << "Trace"<<endl;
    //Show num on
    cout << n <<endl;
    
    return (n*factorial(n-1));

  }
}

//fibonacci
//Fibonacci algorithm recursively
//
int fib(int n)
{
  if (n <= 2){
    return 1;
  }
  else{
    return fib(n-1) + fib(n-2);
  }
}


int main(){

  int arr[5] = {1,2,3,4,5};
  
  //Recursive summation
  sum(arr, 0, 4);
  
  //find factorial of 8
  cout << factorial(8) <<endl;

  //Fibonacci Recursion
  cout << fib(10)<<endl;


  return 0;
}
