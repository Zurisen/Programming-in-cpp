#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;

int main(){
  
  vector<int> avec;
  vector<int> bvec;
  typedef vector<int>::size_type vec_int;

  char letter;
  int num;
  string input;
  int iter=0;
  while (cin>>input){
    if (iter%2==0){
      letter = input[0];
    }else{
      num = stoi(input);
      if (letter=='a'){
        avec.push_back(num);
      }else{
        bvec.push_back(num);
      }
    }
    iter++;

  }

  vec_int classes_count[2] = {};
  vector<int> out_vec;
  vec_int input_len = avec.size() + bvec.size();

  for (vec_int i=0; i<input_len; i++){
    if (classes_count[0]<avec.size()){
      out_vec.push_back(avec[classes_count[0]]);
      classes_count[0]++;
      i++;
    }
    if (classes_count[1]<bvec.size()){
      out_vec.push_back(bvec[classes_count[1]]);
      classes_count[1]++;
    }
  }


  for (vec_int i=0; i<input_len; i++){
    cout << out_vec[i] << endl;
  }

  return 0;
}
