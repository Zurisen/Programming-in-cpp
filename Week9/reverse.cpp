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

    vector<int> numbers_rev;
    for (vector<int>::reverse_iterator it=numbers.rbegin(); it!=numbers.rend(); ++it){
        //numbers_rev.push_back(it);
        cout << *it << " ";
    }


    return 0;
}
