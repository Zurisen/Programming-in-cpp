# include <iostream>
# include <math.h>
# include <vector>

using namespace std;

int main(){
    int n;
    int iters = 0;
    cin >> n;

    for (int i=2; i<=n; i=i+2){
        while (n%i == 0){
            if (iters != 0){
                cout << " * ";
            }
            n = n/i;
            cout << i;
            iters++;
        }
        if (i==2){
            i = 1;
        }

    }

    cout << endl;
    return 0;
}
