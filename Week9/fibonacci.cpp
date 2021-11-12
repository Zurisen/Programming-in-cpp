#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
  string input;
  vector<int> numbers={0,1,2,3,4,5,6,7,8,9,10};
  /*
  while(cin>>input){
    numbers.push_back(stoi(input));
  }
  */
  vector<int> fib_seq = {1,1};

  for (vector<int>::iterator it=numbers.begin(); it!=numbers.end(); ++it){
    for(int i=1; i<*it; i++){
      fib_seq.push_back(fib_seq[0]+fib_seq[1]);
      fib_seq.erase(fib_seq.begin());
    }
    
    cout << fib_seq[1] << " ";
    fib_seq = {1,1};
  }


  return 0;
}
