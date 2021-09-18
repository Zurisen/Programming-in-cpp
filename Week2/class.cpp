#include <iostream>
using namespace std;

void printArray(int n, int array[]){
    cout << "The array contains ";
    for (int i= 0; i<n; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(){
    int aGiven[] = {1, 2, 3};
    printArray(3, aGiven);

    int aLengthComp[3];
    printArray(3, aLengthComp);

    int aZeros[3] = {};
    printArray(3, aZeros);

    int n;
    cout << "Input length of array: ";
    cin >> n;

    cout << "Input the " << n << " numbers" << endl; 
    /* Need to to this to allocate memory */
    int *aLengthRun = new int[n];

        for (int i=0; i<n; i++){
            cin >> aLengthRun[i];
        }
    printArray(n, aLengthRun); 

    return 0;
}
