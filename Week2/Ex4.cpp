# include <iostream>
using namespace std;

int main(){
    int loop = 0;
    int n;
    int ntimes[1001] = {};

    while (loop == 0){
    cin >> n;
        if (n<1 || n>1000){
            break;
        }
    cout << ntimes[n] << endl;
    ntimes[n] = ntimes[n] + 1;
    
    }

    return 0;
}
