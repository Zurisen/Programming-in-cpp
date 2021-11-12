#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
  
  string input;
  vector<int> numbers;
  while (cin>>input){
    numbers.push_back(stoi(input));
  }

  vector<int>::reverse_iterator rev_it = numbers.rbegin();
  for (vector<int>::iterator it=numbers.begin(); it!=numbers.end(); ++it){
    if (*rev_it!=*it){
      cout << "no" << endl;
      return 0;
    }

    ++rev_it;
  }

  cout << "yes" << endl;


  return 0;
}
