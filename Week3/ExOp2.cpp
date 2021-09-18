#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int numbers[n];
    
    for (int i=0; i<n; i++){
        cin >> numbers[i];
    }    

    // Search for maximum
    int maxint = 0;
    int maxpos = 0;
    for (int i=0; i<n; i++){
        if (numbers[i]>maxint){
            maxint = numbers[i];
            maxpos = i;  
        }
    }

    for (int i=0; i<n; i++){
        if (i==maxpos){
            cout << "*" << numbers[i] << "* ";
        }
        else{
            cout << numbers[i] << " ";
        }
    }

    return 0;
}
