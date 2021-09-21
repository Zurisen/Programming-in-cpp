#include <iostream>
using namespace std;

// Using c++ pointers
void swap1(int* x, int* y){
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

//passing by reference
void swap2(int &x, int &y){
  int tmp = x;
  x = y;
  y = tmp;
}



// SWAP FUNCTION
int main(){
  int a = 1, b = 42;
  cout << a << " " << b << endl;
  swap1(&a, &b);
  cout << a << " " << b << endl;

  

  return 0;
}

