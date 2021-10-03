#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <sstream>
using namespace std;

class fract{

private:
    // Internal representation of a fract as two integers
    int numerator, denominator;

public:
    // Class constructor
    fract(int, int);

    // Methods to update the fract
    void reducegcd();
    void inputpars(int n, int d);
    void add(fract f);
    void mult(fract f);
    void div(fract f);

    // Display method
    void display();
  
};

fract::fract(int n, int d){
  numerator = n;
  denominator = d;
}

void fract::reducegcd(){
  int div = __gcd(numerator, denominator);
  numerator = numerator/div;
  denominator = denominator/div;
}

void fract::inputpars(int n, int d){
  numerator = n;
  denominator = d;
}

void fract::add(fract f){
  if (f.denominator != denominator){
    numerator = f.numerator*denominator + numerator*f.denominator;
    denominator = denominator*f.denominator;
  }
  else{
  numerator = numerator + f.numerator;
  }
  reducegcd();
}

void fract::mult(fract f){
  numerator = numerator*f.numerator;
  denominator = denominator*f.denominator;
  reducegcd();
}

void fract::div(fract f){
  numerator = numerator*f.denominator;
  denominator = denominator*f.numerator;
  reducegcd();
}

void fract::display(){
  cout << numerator << " / " << denominator << endl;
}

int main(){
  fract frac0(0,0), frac1(0,0);
  int n, d;
  char op;
  string input;

  while (getline(cin, input)){
    stringstream ss(input);
    // calling the stream of numbers and operators
    ss >> n;
    ss.ignore(1,'/');
    ss >> d;
    frac0.inputpars(n,d);
    ss.ignore();

    ss >> op;
    if (op == 'd'){
      ss.ignore(2);
    }

    ss >> n;
    ss.ignore(1,'/');
    ss >> d;
    frac1.inputpars(n,d);
    ss.ignore();
   
    // choose operation to do
    switch(op){
      case '+':
        frac0.add(frac1);
        break;
      case '*':
        frac0.mult(frac1);
        break;
      case 'd':
        frac0.div(frac1);
        break;
      default:
        break;
    }

    // Display the result
    frac0.display();
  }  
   return 0;
}

