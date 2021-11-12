#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int levenshtein(string u, string v){
  if (u.length()==0) return v.length();
  if (v.length()==0) return u.length();
  return min({
    levenshtein(u.substr(1),v)+1,
    levenshtein(u,v.substr(1))+1,
    levenshtein(u.substr(1),v.substr(1))+(u[0]==v[0] ? 0 : 1)
  });
}

int main(){

  string u,v;
  getline(cin, u, ' ');
  getline(cin, v);

  cout << levenshtein(u,v) << endl;
  return 0;
}
