#include <iostream>
using namespace std;

int main(){
    int x=9;
    int y=42;

    int *p = nullptr;
    p = &x;
    cout << "The value of p is " << p << " and it points to value " << *p << endl;
    
    p = &y;
    cout << "The value of p is " << p << " and it points to value " << *p << endl;

    int a[] = {100, 200, 300};
    cout << "The value of a is " << a << " and points to value " << a[0] << endl;
    
    p = a;
    cout << "The value of p is " << p << " and points to value " << p[0] << endl;

    cout << "p[0] = " << p[0] << "\tp[1] = " << p[1] << "\tp[2] = " << p[2] << endl; 
}
