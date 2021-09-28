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

  int dotprod=0;
  vec_int dotprod_size = bvec.size();
  if (avec.size()<bvec.size()){
    dotprod_size = avec.size();
  }

  for (vec_int i=0; i<dotprod_size; i++){
    dotprod += avec[i]*bvec[i]; 
  }

  cout << dotprod;

  return 0;
}
