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

    for (int i=1; i<n; i++){
        if (numbers[i]<numbers[i-1]){
            cout << "UNSORTED" << endl;
            exit(0);
        }
    }
    cout << "SORTED" << endl;

    return 0;
}
