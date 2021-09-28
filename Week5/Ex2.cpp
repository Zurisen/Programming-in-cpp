#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>


using namespace std;

int main(){
  map<char,int> df;
  char letter;
  int num;
 
  string input;
  int iter=0;
  /*
  while (cin>>input){
    if (iter%2 == 0){
      letter = input[0];
    }else{
      num = stoi(input);
      df.insert(pair<char,int>(letter, num));
    }
    iter++;
  }
  */

  vector<int> avec{3,1,4};
  vector<int> bvec{2,1,2,6};
  typedef vector<int>::size_type sz;
  //map<char,vector<int>> amap;
  //map<char,vector<int>> bmap;
  //amap.insert(pair<char,vector<int>>('a',avec));
  //bmap.insert(pair<char,vector<int>>('b',bvec));
  
  sz classes_count[2] = {};
  vector<int> out_vec;
  int input_len = 7;
  for (int i=0; i<input_len; i++){
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


  for (int i=0; i<input_len; i++){
    cout << out_vec[i] << endl;
  }

  return 0;
}
