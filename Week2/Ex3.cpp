# include <iostream>
# include <math.h>
using namespace  std;

void leibniz(int &i, double &pi){
    if (i%2==0){
        pi += 1./(2*i + 1);
    } 
    else {
        pi -= 1./(2*i + 1);
    }
}


int main(){
    int n;
    double pi = 0.;
    cin >> n;

    for (int i=0; i<n; i++){
        leibniz(i, pi);
    }
    
    pi = pi*4;
    cout << pi << endl;
    return 0;
}
