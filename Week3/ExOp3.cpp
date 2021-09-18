#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    double vec1[n];
    double vec2[n];
    
    for (int i=0; i<n; i++){
        cin >> vec1[i];
    }    
    for (int i=0; i<n; i++){
        cin >> vec2[i];
    }
    
    double dotprod = 0;
    for (int i=0; i<n; i++){
        dotprod += vec1[i]*vec2[i];
    }
    cout << dotprod;

    return 0;
}
