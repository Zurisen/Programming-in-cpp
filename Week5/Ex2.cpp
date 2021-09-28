#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;

int main(){
  map<char,vector<int>> dataframe;
  map<int, char> index;
  char letter;
  int num;
  string input;
  int iter=0;
  unsigned int input_len = 0;
 
  // read cin 
  while (cin>>input){
    if (iter%2==0){
      letter = input[0];
    }else{
      num = stoi(input);
      if (dataframe.count(letter)>0){
        dataframe[letter].push_back(num);
        input_len++;
      }else{
        dataframe.insert(pair<char,vector<int>>(letter,vector<int>{num}));
        input_len++;
      }
    }
    iter++;
  }
  // initialize output vector 
  vector<int> out_vec;
  // start the loop 
  map<char,vector<int>>::iterator itr;
  for (int i=0; i<input_len; i++){
    for (itr=dataframe.begin(); itr!=dataframe.end(); ++itr){
        if (itr->second.size()>0){
          out_vec.push_back(itr->second[0]);
          itr->second.erase(itr->second.begin());
        }
    }
  }
  for (int i=0; i<out_vec.size(); i++){
    cout << out_vec[i] << endl;
  }
  return 0;
}
