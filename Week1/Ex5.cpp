# include <iostream>
using namespace std;

int main(){
    int length;

    cout << "Input length: ";
    cin >> length;

    float a = 0.;
    float sum = 0.;

    cout << "Input elements: " << endl;
    for (int i = 0; i<length; i++){
        cin >> a;
        sum += a;
    }

    cout << "Result of the sum: " << sum << endl;

    return 0;
}
