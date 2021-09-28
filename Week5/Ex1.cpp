#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
  vector<char> letter_vec;//{'a', 'b', 'b', 'a', 'a', 'b'};
  vector<char> letter_unique;//{'a', 'b', 'b', 'a', 'a', 'b'};
  vector<int> num_vec;//{3, 2, 1, 1, 4, 2};
  
  string input;
  int iter = 0;
  while (cin>>input){
    if (iter%2 == 0){
      letter_vec.push_back(input[0]);
      letter_unique.push_back(input[0]);
    }else{
      num_vec.push_back(stoi(input));
    }

    iter++;
  }


  typedef vector<int>::size_type vec_sz;

  // finding unique classes
  sort( letter_unique.begin(), letter_unique.end());
  letter_unique.erase( unique( letter_unique.begin(), letter_unique.end() ), letter_unique.end() );

  vector<int> output_vec;
  vector<int> classx;
  for (vec_sz i=0; i<letter_unique.size(); i++){
    for (vec_sz j=0; j<num_vec.size(); j++){
      if (letter_vec[j]==letter_unique[i]){
        classx.push_back(num_vec[j]);
      }
    }
    sort(classx.begin(), classx.end());
    for (vec_sz k=0; k<classx.size(); k++){
      output_vec.push_back(classx[k]);
    }
    classx.clear();
  }
 
  for (vec_sz i=0; i<output_vec.size(); i++){
    cout << output_vec[i] << endl;
  }
  return 0;
}
