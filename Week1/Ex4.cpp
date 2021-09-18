# include <iostream>
using namespace std;

int main(){
    double x, y, z, result;

    cout << "Input x y z: ";
    cin >> x >> y >> z;

    result = x+y-z;
    cout << x << "+" << y << "-" << z <<" = " << result << endl;

    return 0;
}
